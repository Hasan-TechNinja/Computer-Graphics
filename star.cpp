#include <windows.h>
#include <GL/glut.h>

void display() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    gluOrtho2D(-100, 100, -100, 100);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_LINES);
    glColor3ub(0, 0, 255);
    glVertex2f(0, 100);
    glVertex2f(0, -100);

    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(100, 0);
    glVertex2f(-100, 0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 255);
    glVertex2d(30, 20);
    glVertex2d(40, 30);
    glVertex2d(30, 30);
    glVertex2d(20, 40);
    glVertex2d(10, 30);
    glVertex2d(0, 30);
    glVertex2d(10, 20);
    glVertex2d(0, 10);
    glVertex2d(10, 10);
    glVertex2d(20, 0);
    glVertex2d(30, 10);
    glVertex2d(40, 10);
    glEnd();
    // transformation
    int tx = 2;
    int ty = 3;

    glBegin(GL_POLYGON);
    glColor3ub(0, 255, 255);
    glVertex2d(30 + tx, 20 + ty);
    glVertex2d(40 + tx, 30 + ty);
    glVertex2d(30 + tx, 30 + ty);
    glVertex2d(20 + tx, 40 + ty);
    glVertex2d(10 + tx, 30 + ty);
    glVertex2d(0 + tx, 30 + ty);
    glVertex2d(10 + tx, 20 + ty);
    glVertex2d(0 + tx, 10 + ty);
    glVertex2d(10 + tx, 10 + ty);
    glVertex2d(20 + tx, 0 + ty);
    glVertex2d(30 + tx, 10 + ty);
    glVertex2d(40 + tx, 10 + ty);


    glEnd();
    // sealing
    int sx = 2;
    int sy = 3;

    glBegin(GL_POLYGON);
    glColor3ub(0, 255, 255);
    glVertex2d(30 * sx, 20 * sy);
    glVertex2d(40 * sx, 30 * sy);
    glVertex2d(30 * sx, 30 * sy);
    glVertex2d(20 * sx, 40 * sy);
    glVertex2d(10 * sx, 30 * sy);
    glVertex2d(0 * sx, 30 * sy);
    glVertex2d(10 * sx, 20 * sy);
    glVertex2d(0 * sx, 10 * sy);
    glVertex2d(10 * sx, 10 * sy);
    glVertex2d(20 * sx, 0 * sy);
    glVertex2d(30 * sx, 10 * sy);
    glVertex2d(40 * sx, 10 * sy);


    glEnd();
    
    // ref
    glBegin(GL_POLYGON);
    glColor3ub(255, 0, 255);
    glVertex2d(30, -20);
    glVertex2d(40, -30);
    glVertex2d(30, -30);
    glVertex2d(20, -40);
    glVertex2d(10, -30);
    glVertex2d(0, -30);
    glVertex2d(10, -20);
    glVertex2d(0, -10);
    glVertex2d(10, -10);
    glVertex2d(20, -0);
    glVertex2d(30, -10);
    glVertex2d(40, -10);
    glEnd();
    // shear
    int she = 3;
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2d(30, 20 + she * 30);
    glVertex2d(40, 30 + she * 40);
    glVertex2d(30, 30 + she * 30);
    glVertex2d(20, 40 + she * 20);
    glVertex2d(10, 30 + she * 10);
    glVertex2d(0, 30 + she * 0);
    glVertex2d(10, 20 + she * 10);
    glVertex2d(0, 10 + she * 0);
    glVertex2d(10, 10 + she * 10);
    glVertex2d(20, 0 + she * 20);
    glVertex2d(30, 10 + she * 30);
    glVertex2d(40, 10 + she * 40);
    glEnd();
    //rotion
    int sin = 1;
    int cos = 0;
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 255);
    glVertex2d(30 * cos - 20 * sin, 20 * cos + 30 * sin);
    glVertex2d(40 * cos - 30 * sin, 30 * cos + 40 * sin);
    glVertex2d(30 * cos - 30 * sin, 30 * cos + 30 * sin);
    glVertex2d(20 * cos - 40 * sin, 40 * cos + 20 * sin);
    glVertex2d(10 * cos - 30 * sin, 30 * cos + 10 * sin);
    glVertex2d(0 * cos - 30 * sin, 30 * cos + 0 * sin);
    glVertex2d(10 * cos - 20 * sin, 20 * cos + 10 * sin);
    glVertex2d(0 * cos - 10 * sin, 10 * cos + 0 * sin);
    glVertex2d(10 * cos - 10 * sin, 10 * cos + 10 * sin);
    glVertex2d(20 * cos - 0 * sin, 0 * cos + 20 * sin);
    glVertex2d(30 * cos - 10 * sin, 10 * cos + 30 * sin);
    glVertex2d(40 * cos - 10 * sin, 10 * cos + 40 * sin);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Two lines");
    glutInitWindowSize(320, 320);
    glutInitWindowPosition(50, 50);
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}