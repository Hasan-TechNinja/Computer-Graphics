#include <windows.h>
#include <GL/glut.h>
#include <GL/freeglut.h>
#include <iostream>

int x = 0;

void display() {
    glLoadIdentity();

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    gluOrtho2D(0, 400, 0, 400);


    glBegin(GL_POLYGON);
    glColor3ub(0, 255, 0);
    glVertex2d(x, 180);
    glVertex2d(x + 20, 180);
    glVertex2d(x + 20, 220);
    glVertex2d(x, 220);
    glEnd();

    
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2d(0, 150);
    glVertex2d(20, 150);
    glVertex2d(20, 250);
    glVertex2d(0, 250); 
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2d(400, 150);
    glVertex2d(380, 150);
    glVertex2d(380, 250);
    glVertex2d(400, 250); 
    glEnd();

    glutSwapBuffers();
}

void update(int value) {
    static bool moveRight = true;

    if (moveRight) {
        x += 1;
        if (x > 400) {
            moveRight = false;
        }
    } else {
        x -= 1;
        if (x < 0) {
            moveRight = true;
        }
    }

    glutPostRedisplay();
    glutTimerFunc(16, update, 0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Simple Square");
    glutInitWindowSize(400, 400);
    glutInitWindowPosition(100, 100);
    glutDisplayFunc(display);
    glutTimerFunc(0, update, 0);
    glutMainLoop();

    return 0;
}
