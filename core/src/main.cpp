#include<iostream>
#include<Core/main.hpp>
#include<GLFW/glfw3.h>

namespace Core {

    int Init::main() {
        GLFWwindow* window;

        if (!glfwInit())
            return -1;

        window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
        if (!window)
        {
            glfwTerminate();
            return -1;
        }

        glfwMakeContextCurrent(window);


        GLFWwindow* glWindow = glfwGetCurrentContext();

        while (!glfwWindowShouldClose(window))
        {
            /* Render here */
            //glClear(GL_COLOR_BUFFER_BIT);

            /* Swap front and back buffers */
            glfwSwapBuffers(window);

            /* Poll for and process events */
            glfwPollEvents();
        }

        glfwTerminate();
        return 0;
    }

    void Init::cube() {
        std::cout << "Cube was initilize!";
        main();
    }

}