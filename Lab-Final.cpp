#include <windows.h>
#include <GL/glut.h>

void display() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glOrtho(-4, 4, -4, 4, -4, 4);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-2.0f, -2.0f);
    glVertex2f(2.0f, -2.0f);
    glVertex2f(-2.0f, 2.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(2.3f, -1.9f);
    glVertex2f(5.0f, -1.9f);
    glVertex2f(5.0f, 1.9f);
    glVertex2f(2.3f, 1.9f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(2.0f, -2.0f);
    glVertex2f(6.0f, -2.0f);
    glVertex2f(6.0f, 2.0f);
    glVertex2f(2.0f, 2.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(6.0f, -3.0f);
    glVertex2f(7.0f, 0.0f);
    glVertex2f(6.0f, 3.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(7.0f, 0.0f);
    glVertex2f(11.0f, 0.0f);
    glVertex2f(11.0f, 3.0f);
    glVertex2f(7.0f, 3.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(11.0f, -1.0f);
    glVertex2f(11.0f, 4.0f);
    glVertex2f(12.0f, 2.0f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(7.0f, -3.0f);
    glVertex2f(5.0f, -5.0f);
    glVertex2f(7.0f, -7.0f);
    glVertex2f(9.0f, -5.0f);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Simple Triangle");
    glutInitWindowSize(320, 320);
    glutInitWindowPosition(50, 50);
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}