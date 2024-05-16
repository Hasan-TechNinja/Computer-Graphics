#include <windows.h>
#include <GL/glut.h>

void init() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-100, 100, -100, 100);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Draw the x- and y-axes
    glBegin(GL_LINES);

    glColor3ub(0, 0, 255); // Blue y-axis
    glVertex2f(0, 100);
    glVertex2f(0, -100);

    glColor3f(0.0f, 1.0f, 0.0f); // Green x-axis
    glVertex2f(100, 0);
    glVertex2f(-100, 0);
    glEnd();

    // First star
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 255); // Blue star
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

    // Second star (offset)
    int tx = 2;
    int ty = 3;
    glBegin(GL_POLYGON);
    glColor3ub(0, 255, 255); // Cyan star
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

    // Third star (lower part)
    glBegin(GL_POLYGON);
    glColor3ub(255, 0, 255); // Purple star
    glVertex2d(30, -20);
    glVertex2d(40, -30);
    glVertex2d(30, -30);
    glVertex2d(20, -40);
    glVertex2d(10, -30);
    glVertex2d(0, -30);
    glVertex2d(10, -20);
    glVertex2d(0, -10);
    glVertex2d(10, -10);
    glVertex2d(20, 0);
    glVertex2d(30, -10);
    glVertex2d(40, -10);
    glEnd();

    // Fourth star intersecting x- and y-axes
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 0); // Yellow star
    glVertex2d(0, 0); // Origin
    glVertex2d(10, 10); // Bottom-right quadrant
    glVertex2d(20, 10);
    glVertex2d(20, 20); // Top-right quadrant
    glVertex2d(10, 30);
    glVertex2d(0, 40);
    glVertex2d(-10, 30); // Top-left quadrant
    glVertex2d(-20, 20);
    glVertex2d(-30, 10); // Bottom-left quadrant
    glVertex2d(-20, 0);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);  // Single-buffered with RGB mode
    glutInitWindowSize(320, 320);  // Window size
    glutInitWindowPosition(50, 50);  // Window position
    glutCreateWindow("Four Stars with Axes");  // Window title
    
    init();  // Initialization
    glutDisplayFunc(display);  // Set display callback
    
    glutMainLoop();  // Enter the GLUT event processing loop
    
    return 0;
}
