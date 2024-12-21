#include "graphics.h"

#include <stdio.h>

void error_callback(int error, const char* description)
{
    fprintf(stderr, "Error: %s\n", description);
}

// Initialize libraries
int initialize_graphics() {
    /* Initialize GLFW library */

    if(!glfwInit()) {
        // error on initializing GLFW
    }

    glfwSetErrorCallback(error_callback);
}

int terminate_graphics() {
    glfwTerminate();
}