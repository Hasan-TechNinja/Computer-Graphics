#include <GL/glut.h>
#include <cmath>


void drawCircle(float cx, float cy, float radius, int segments) {
    glBegin(GL_POLYGON);
    for (int i = 0; i < segments; ++i) {
        float theta = 2.0f * M_PI * float(i) / float(segments);  
        float x = radius * cosf(theta);
        float y = radius * sinf(theta);
        glVertex2f(cx + x, cy + y);
    }
    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.0f, 0.42f, 0.24f);  
    glBegin(GL_QUADS);  
    glVertex2f(0.0f, 0.0f);
    glVertex2f(1.0f, 0.0f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(0.0f, 1.0f);
    glEnd();

 
    glColor3f(0.84f, 0.11f, 0.14f);  
    drawCircle(0.5f, 0.5f, 0.2f, 100); 

    glutSwapBuffers();  
}

void init() {
    glClearColor(0.0, 0.0, 0.0, 1.0);  
    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);  
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Flag of Bangladesh");

    init(); 
    glutDisplayFunc(display);  

    glutMainLoop(); 
    return 0;
}
