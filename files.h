#ifndef files.h
#define files.h

// STD Libraries
#include <iostream>
#include <vector>

// Include GLFW Header
#include <GL/glew.h>
#include <GLFW/glfw3.h>

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
public:
    Drawer();
    ~Drawer();

    bool initialize();
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
