#ifndef files_h
#define files_h

// STD Libraries
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

// Include GLFW Header
#include <GL/glew.h>
#include <GLFW/glfw3.h>

using namespace std;

// Window class
class Window {
private:
    GLFWwindow* window;
public:
    Window();
    ~Window();

    // Open the window
    bool initialize();
    // Control the window
    void mainLoop();
};

// Class of drawing system
class Drawer
{
private:
    float* vertices = nullptr;
    int vertexCount; 

    GLuint shaderProgram;
    GLuint VAO, VBO;
public:

    Drawer();
    ~Drawer();
    // render the images
    bool draw();
    // set up vertices, calculations, shaders
    bool initialize();
    // set up vertices
    bool setVertices(const float* newVertices, int vertexAmount);
};

// Class of the question elements
class Solver
{
private: 
    // could add more
public:
    Solver();
    ~Solver();

    bool calculate();

};

// create global objects
extern Drawer drawerObj;
extern Window windowObj;
extern Solver solverObj;

#endif
