#include <stdio.h>
#include <math.h>
#include <GL/glut.h>

void plot_point(int xC, int yC, int x, int y) {
  glBegin(GL_POINTS);
  glColor3f(1.0, 1.0, 1.0);

  glVertex2i(xC + x, yC + y);
  glVertex2i(xC + x, yC - y);
  glVertex2i(xC + y, yC + x);
  glVertex2i(xC + y, yC - x);
  glVertex2i(xC - x, yC - y);
  glVertex2i(xC - y, yC - x);
  glVertex2i(xC - x, yC + y);
  glVertex2i(xC - y, yC + x);

  glEnd();
}

void draw_circle(int xC, int yC, int r) {
  int x = 0, y = r;
  float pk = (5.0 / 4.0) - r;

  plot_point(xC, yC, x, y);

  int k;

  while (x < y) {
    x++;

    if (pk < 0) {
      pk = pk + 2 * x + 1;
    }
    else {
      y--;
      pk = pk + 2 * x + 1 - 2 * y;
    }

    plot_point(xC, yC, x, y);
  }
}

void display() {
  int xCoordinate = 800, yCoordinate = 500;

  glClearColor(0.0, 0.0, 0.0, 1.0);
  gluOrtho2D(0, xCoordinate, 0, yCoordinate);
  glClear(GL_COLOR_BUFFER_BIT);

  glBegin(GL_LINES);
  glColor3f(1.0, 1.0, 1.0);

  glVertex2i(300, 200);
  glVertex2i(370, 390);

  glVertex2i(370, 390);
  glVertex2i(420, 390);

  glVertex2i(350, 340);
  glVertex2i(480, 300);

  glVertex2i(350, 340);
  glVertex2i(420, 200);

  glVertex2i(420, 200);
  glVertex2i(550, 200);

  glVertex2i(480, 300);
  glVertex2i(550, 200);

  glVertex2i(420, 200);
  glVertex2i(550, 200);

  glVertex2i(420, 200);
  glVertex2i(500, 330);

  glVertex2i(470, 340);
  glVertex2i(520, 330);

  glVertex2i(520, 330);
  glVertex2i(540, 340);

  glVertex2i(470, 340);
  glVertex2i(540, 340);

  glEnd();

  draw_circle(300, 200, 70);

  draw_circle(550, 200, 70);

  glFlush();
}

int main(int argc, char** argv) {
  glutInit(&argc, argv);
  glutInitWindowSize(800, 500);
  glutInitWindowPosition(50, 50);
  glutCreateWindow("Circle");
  glutDisplayFunc(display);
  glutMainLoop();

  return 0;
}