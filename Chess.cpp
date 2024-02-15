#include <windows.h>
#include <GL/glut.h>

void display() {
  glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
  gluOrtho2D(0, 600, 0, 600);
  glClear(GL_COLOR_BUFFER_BIT);

  glBegin(GL_POLYGON);
  glColor3f(0.0f, 0.0f, 0.0f);
  glVertex2d(0, 0);
  glVertex2d(100, 0);
  glVertex2d(100, 100);
  glVertex2d(0, 100);
  glEnd();

  glBegin(GL_POLYGON);
  glColor3f(0.0f, 0.0f, 0.0f);
  glVertex2d(200, 0);
  glVertex2d(300, 0);
  glVertex2d(300, 100);
  glVertex2d(200, 100);
  glEnd();

  glBegin(GL_POLYGON);
  glColor3f(0.0f, 0.0f, 0.0f);
  glVertex2d(400, 0);
  glVertex2d(500, 0);
  glVertex2d(500, 100);
  glVertex2d(400, 100);
  glEnd();

  glBegin(GL_POLYGON);
  glColor3f(0.0f, 0.0f, 0.0f);
  glVertex2d(100, 100);
  glVertex2d(200, 100);
  glVertex2d(200, 200);
  glVertex2d(100, 200);
  glEnd();

  glBegin(GL_POLYGON);
  glColor3f(0.0f, 0.0f, 0.0f);
  glVertex2d(300, 100);
  glVertex2d(400, 100);
  glVertex2d(400, 200);
  glVertex2d(300, 200);
  glEnd();

  glBegin(GL_POLYGON);
  glColor3f(0.0f, 0.0f, 0.0f);
  glVertex2d(500, 100);
  glVertex2d(600, 100);
  glVertex2d(600, 200);
  glVertex2d(500, 200);
  glEnd();

  glBegin(GL_POLYGON);
  glColor3f(0.0f, 0.0f, 0.0f);
  glVertex2d(0, 200);
  glVertex2d(100, 200);
  glVertex2d(100, 300);
  glVertex2d(0, 300);
  glEnd();

  glBegin(GL_POLYGON);
  glColor3f(0.0f, 0.0f, 0.0f);
  glVertex2d(200, 200);
  glVertex2d(300, 200);
  glVertex2d(300, 300);
  glVertex2d(200, 300);
  glEnd();

  glBegin(GL_POLYGON);
  glColor3f(0.0f, 0.0f, 0.0f);
  glVertex2d(400, 200);
  glVertex2d(500, 200);
  glVertex2d(500, 300);
  glVertex2d(400, 300);
  glEnd();

  glBegin(GL_POLYGON);
  glColor3f(0.0f, 0.0f, 0.0f);
  glVertex2d(100, 300);
  glVertex2d(200, 300);
  glVertex2d(200, 400);
  glVertex2d(100, 400);
  glEnd();

  glBegin(GL_POLYGON);
  glColor3f(0.0f, 0.0f, 0.0f);
  glVertex2d(300, 300);
  glVertex2d(400, 300);
  glVertex2d(400, 400);
  glVertex2d(300, 400);
  glEnd();

  glBegin(GL_POLYGON);
  glColor3f(0.0f, 0.0f, 0.0f);
  glVertex2d(500, 300);
  glVertex2d(600, 300);
  glVertex2d(600, 400);
  glVertex2d(500, 400);
  glEnd();

  glBegin(GL_POLYGON);
  glColor3f(0.0f, 0.0f, 0.0f);
  glVertex2d(0, 400);
  glVertex2d(100, 400);
  glVertex2d(100, 500);
  glVertex2d(000, 500);
  glEnd();

  glBegin(GL_POLYGON);
  glColor3f(0.0f, 0.0f, 0.0f);
  glVertex2d(200, 400);
  glVertex2d(300, 400);
  glVertex2d(300, 500);
  glVertex2d(200, 500);
  glEnd();

  glBegin(GL_POLYGON);
  glColor3f(0.0f, 0.0f, 0.0f);
  glVertex2d(400, 400);
  glVertex2d(500, 400);
  glVertex2d(500, 500);
  glVertex2d(400, 500);
  glEnd();

  glBegin(GL_POLYGON);
  glColor3f(0.0f, 0.0f, 0.0f);
  glVertex2d(100, 500);
  glVertex2d(200, 500);
  glVertex2d(200, 600);
  glVertex2d(100, 600);
  glEnd();

  glBegin(GL_POLYGON);
  glColor3f(0.0f, 0.0f, 0.0f);
  glVertex2d(300, 500);
  glVertex2d(400, 500);
  glVertex2d(400, 600);
  glVertex2d(300, 600);
  glEnd();

  glBegin(GL_POLYGON);
  glColor3f(0.0f, 0.0f, 0.0f);
  glVertex2d(500, 500);
  glVertex2d(600, 500);
  glVertex2d(600, 600);
  glVertex2d(500, 600);
  glEnd();

  glFlush();
}

int main(int argc, char** argv) {
  glutInit(&argc, argv);
  glutCreateWindow("Simple Square");
  glutInitWindowSize(320, 320);
  glutInitWindowPosition(50, 50);
  glutDisplayFunc(display);
  glutMainLoop();

  return 0;
}