#include <glad/gl.h>
#include <GLFW/glfw3.h>

class Window {
    private:
        GLFWwindow* window;
};

int initialize_graphics();

int terminate_graphics();

int set_window_title();

int create_window(char* title, int width, int height);