#include <GL/glut.h>

void drawCircle(int xc, int yc, int radius) {
    int x = 0;
    int y = radius;
    int d = 1 - radius;

    auto plotCirclePoints = [xc, yc](int x, int y) {
        glBegin(GL_POINTS);
        glVertex2i(xc + x, yc + y);
        glVertex2i(xc - x, yc + y);
        glVertex2i(xc - x, yc - y);
        glVertex2i(xc + x, yc - y);
        glVertex2i(xc + y, yc + x);
        glVertex2i(xc - y, yc + x);
        glVertex2i(xc - y, yc - x);
        glVertex2i(xc + y, yc - x);
        glEnd();
    };

    plotCirclePoints(x, y); 

    while (x < y) {
        if (d < 0) {
            d += 2 * x + 3;
        } else {
            d += 2 * (x - y) + 5;
            y--;
        }
        x++;
        plotCirclePoints(x, y);  
    }
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    drawCircle(125, 125, 100);

    glutSwapBuffers(); 
}

void init() {
    glClearColor(0.0, 0.0, 0.0, 1.0);  
    glOrtho(0.0, 250.0, 0.0, 250.0, -1.0, 1.0); 
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(250, 250);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Midpoint Circle Algorithm");

    init(); 
    glutDisplayFunc(display);  

    glutMainLoop();  
    return 0;
}
