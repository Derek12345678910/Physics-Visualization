#ifndef files.h
#define files.h

#include <iostream>

// Include GLFW Header
#include <GLFW/glfw3.h>
#include <GL/glew.h>

// Libaries
#include <vector>

using namespace std;

// Functions

// Window class
class Window {
private:
    GLFWwindow* window;
public:
    Window();
    ~Window();

    // Open the window
    bool initialize();

    // Edit the window
    void mainLoop();
};

// Class of drawing system
class Drawer
{
private:
    GLuint vertexArray;
    GLuint vertexBuffer;
    GLuint shaderProgram;

    GLuint compileShader(const char* source, GLenum shaderType);
    GLuint createShaderProgram(const char* vertexSource, const char* fragmentSource);

public:
    Drawer();
    ~Drawer();

    bool initialize();
    void render();
    void cleanup();
};

// Class of the coaster elements
class Coaster
{
private:
    double startHeight;
    double endHeight;
    double objectMass;
    double length;
    double friction;
    // could add more
};

#endif
