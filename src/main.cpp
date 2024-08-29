#include "../files.h"

using namespace std;

// Main entry point
int main() {
    // Define the window class
    Window window;
    // Define drawer class
    Drawer drawer;
    
    // Initialize the window
    if (!window.initialize()) {
        cerr << "Window initialization failed." << endl;
        return -1;
    }

    // Initialize the drawer
    if (!drawer.initialize()) {
        cerr << "Drawer initialization failed." << endl;
        return -1;
    }

    // Enter the main loop
    window.mainLoop();

    return 0;
}
