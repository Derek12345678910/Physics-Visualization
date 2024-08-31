#include "../files.h"

using namespace std;

// define instances of objects
Drawer drawerObj;
Window windowObj;
Solver solverObj;

// Main entry point
int main() {
    
    // Initialize the window
    if (!windowObj.initialize()) {
        cerr << "Window initialization failed." << endl;
        return -1;
    }

    // Initialize the drawer
    if (!drawerObj.initialize()) {
        cerr << "Drawer initialization failed." << endl;
        return -2;
    }

    // Enter the main loop
    windowObj.mainLoop();

    return 0;
}
