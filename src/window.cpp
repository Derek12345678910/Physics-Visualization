#include "../files.h"

using namespace std;

// Define the drawer class
Drawer drawer;

// Constructor
Window::Window() : window(nullptr) {}

// Destructor
Window::~Window() {
    if (window) {
        glfwDestroyWindow(window);
    }
    glfwTerminate();
}

bool Window::initialize() {
    if (!glfwInit()) {
        cerr << "Failed to initialize GLFW" << endl;
        return false;
    }

    window = glfwCreateWindow(800, 600, "Roller Coaster Generator", nullptr, nullptr);
    if (!window) {
        cerr << "Failed to create GLFW window" << endl;
        glfwTerminate();
        return false;
    }

    glfwMakeContextCurrent(window);

    // Initialize GLEW
    GLenum glewInitResult = glewInit();
    if (glewInitResult != GLEW_OK) {
        cerr << "Failed to initialize GLEW: " << glewGetErrorString(glewInitResult) << endl;
        return false;
    }

    glViewport(0, 0, 800, 600);

    return true;
}


// Main loop to handle rendering and events
void Window::mainLoop() {
    while (!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        // render

        glfwSwapBuffers(window);
        glfwPollEvents();
    }
}
