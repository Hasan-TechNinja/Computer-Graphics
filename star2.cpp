#include <windows.h>
#include <GL/glut.h>

void init() {
    // Set clear color and orthographic projection
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-100, 100, -100, 100);
    glMatrixMode(GL_MODELVIEW);
}

void drawAxes() {
    glBegin(GL_LINES);
    // y-axis
    glColor3ub(0, 0, 255);  // Blue color
    glVertex2f(0, 100);
    glVertex2f(0, -100);

    // x-axis
    glColor3ub(0, 255, 0);  // Green color
    glVertex2f(100, 0);
    glVertex2f(-100, 0);
    glEnd();
}

void drawPolygon(float xOffset = 0, float yOffset = 0) {
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 255);  // Blue color
    glVertex2d(30 + xOffset, 20 + yOffset);
    glVertex2d(40 + xOffset, 30 + yOffset);
    glVertex2d(30 + xOffset, 30 + yOffset);
    glVertex2d(20 + xOffset, 40 + yOffset);
    glVertex2d(10 + xOffset, 30 + yOffset);
    glVertex2d(0 + xOffset, 30 + yOffset);
    glVertex2d(10 + xOffset, 20 + yOffset);
    glVertex2d(0 + xOffset, 10 + yOffset);
    glVertex2d(10 + xOffset, 10 + yOffset);
    glVertex2d(20 + xOffset, 0 + yOffset);
    glVertex2d(30 + xOffset, 10 + yOffset);
    glVertex2d(40 + xOffset, 10 + yOffset);
    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    drawAxes();  // Draw the x- and y-axes
    
    // Draw polygons
    drawPolygon();  // First polygon
    drawPolygon(2, 3);  // Second polygon with offset
    drawPolygon(0, -30);  // Third polygon in the lower part

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);  // Set display mode
    glutInitWindowSize(320, 320);  // Set window size
    glutInitWindowPosition(50, 50);  // Set window position
    glutCreateWindow("Polygons and Axes");  // Create the window
    
    init();  // Initialize OpenGL settings
    glutDisplayFunc(display);  // Set the display callback
    
    glutMainLoop();  // Enter the GLUT event processing loop
    
    return 0;
}
