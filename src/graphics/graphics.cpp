#include "graphics.h"

#include <stdio.h>

GLFWwindow* ActiveWindow;

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

int create_window(char* title, int width, int height) {
    ActiveWindow = glfwCreateWindow(width, height, title, NULL, NULL);
}