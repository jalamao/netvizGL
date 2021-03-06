#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "inc/GLWindow.h"

//static void widgetFunction(Widget *x){
//  x = Widget::Ins();
//}

int main(int argc, char **argv) {
  GLWindow *window = GLWindow::Ins();

  //std::thread widgetThread(widgetFunction, buttonWidget);

  if (NULL != window->window) {
    while (!glfwWindowShouldClose(window->window))
      window->render();
    glDisableClientState(GL_COLOR_ARRAY);
  }

  glfwDestroyWindow(window->window);
  glfwTerminate();
  return 0;
}