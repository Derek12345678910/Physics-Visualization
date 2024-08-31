#include "../files.h"

using namespace std;

// Constructor
Drawer::Drawer() : vertices(nullptr), vertexCount(){}

// Destructor
Drawer::~Drawer() {
    glDeleteVertexArrays(1, &VAO);
    glDeleteBuffers(1, &VBO);
    glDeleteProgram(shaderProgram);

    // vertices
    vertexCount = 0;
    delete[] vertices;
}

// Read shader files
string ReadFile (const string& fileLoc){
    ifstream file;
    file.open (fileLoc, ios::in);
    stringstream contents;

    if (!file.fail()){
        contents << file.rdbuf();
    }
    return contents.str();
}

// create and compile the shaders
GLuint createAndCompileShader(const string& fileLoc, GLuint shaderType){
    // read
    const string shaderSource = ReadFile(fileLoc);
    const char* cShader = shaderSource.c_str();

    GLuint shader = glCreateShader(shaderType);
    glShaderSource(shader, 1, &cShader, nullptr);

    // compile
    glCompileShader(shader);

    // check if success
    int success; 
    glGetShaderiv(shader, GL_COMPILE_STATUS, &success);
    if (!success){
        char infoLog[512];
        glGetShaderInfoLog(shader, 512, nullptr, infoLog);
        cerr << "Shader error: " << infoLog << endl;
    }
    return shader;
}

GLuint createAndLinkProgram(){
    GLuint vertexShader = createAndCompileShader("../shaders/shader.vert", GL_VERTEX_SHADER);
    GLuint fragmentShader = createAndCompileShader("../shaders/shader.frag", GL_FRAGMENT_SHADER);

    GLuint program = glCreateProgram();
    glAttachShader(program, vertexShader);
    glAttachShader(program, fragmentShader);

    glLinkProgram(program);
    int success;
    glGetProgramiv(program, GL_LINK_STATUS, &success);
    if (!success){
        char infoLog[512];
        glGetProgramInfoLog(program, 512, nullptr, infoLog);
        cerr << "GL Program Linking Error: " << infoLog << endl;
    }
    return program;
}

bool Drawer::setVertices(const float* newVertices, int vertexAmount){

    // delete the old vertices
    if(vertices != nullptr){
        delete[] vertices;
    }
    // set vertex amount
    vertexCount = vertexAmount;

    vertices = new float[vertexCount];

    for (int i = 0; i < vertexCount; ++i) {
        vertices[i] = newVertices[i];
    }
    return true;
}

bool Drawer::initialize() {

    // grab the vertices needed
    if (!solverObj.calculate()){
        cerr << "Error Calculating" << endl;
        return false;
    }

    // create and link program
    shaderProgram = createAndLinkProgram();

    // initialize the shader stuff (idk)
    glGenVertexArrays(1, &VAO);
    glGenBuffers(1, &VBO);
    glBindVertexArray(VAO);
    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glBufferData(GL_ARRAY_BUFFER, vertexCount * sizeof(float), vertices, GL_DYNAMIC_DRAW);

    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3* sizeof(float), (void*)0);
    glEnableVertexAttribArray(0);

    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindVertexArray(0);

    return true;
}

bool Drawer::draw(){

    // use the shader program
    glUseProgram(shaderProgram);
    glBindVertexArray(VAO);
    glDrawArrays(GL_LINES, 0, vertexCount / 3);

    return true;

}