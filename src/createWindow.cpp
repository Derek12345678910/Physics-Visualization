#include <iostream>
#include "../files.h"

using namespace std;

// Create a GLFW Window
int createWindow(){
    // Incase the GLFW Window does not open
    if (!glfwInit()) { 
        cerr << "Failed to initialize GLFW" << endl;
        return -1;
    }

    // Window size and Name
    GLFWwindow* window = glfwCreateWindow(800, 600, "Roller Coaster Generator", nullptr, nullptr);
    // Fallback on failed creation
    if (!window) {
        cerr << "Failed to create GLFW window" << endl;
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    while (!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        // Render code goes here

        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    // When exited delete the window
    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}