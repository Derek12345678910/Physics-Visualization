#include "../files.h"

using namespace std;

// Constructor
Window::Window() : window(nullptr) {}

// Destructor
Window::~Window() {
    if (window) {
        glfwDestroyWindow(window);
    }
    glfwTerminate();
}

void setWindow(){
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GLFW_TRUE);

}

bool Window::initialize() {
    if (!glfwInit()) {
        cerr << "Failed to initialize GLFW" << endl;
        return false;
    }

    setWindow();

    window = glfwCreateWindow(800, 600, "Kinematics Simulator", nullptr, nullptr);
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
        if (!drawerObj.draw()){
            cerr << "Failed to render" << endl;
        }

        // sweap front and back buffers
        glfwSwapBuffers(window);
        // poll and process events
        glfwPollEvents();
    }
}
