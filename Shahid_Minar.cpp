#include <GL/glut.h>
#include <cmath>

void drawRectangle(float x1, float y1, float x2, float y2) {
    glBegin(GL_QUADS);
    glVertex2f(x1, y1);
    glVertex2f(x2, y1);
    glVertex2f(x2, y2);
    glVertex2f(x1, y2);
    glEnd();
}

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

   
    glColor3f(1.0f, 1.0f, 1.0f);  

 
    drawRectangle(0.45f, 0.4f, 0.55f, 0.8f);

   
    drawRectangle(0.35f, 0.4f, 0.4f, 0.7f);
    drawRectangle(0.6f, 0.4f, 0.65f, 0.7f);

    drawRectangle(0.25f, 0.4f, 0.3f, 0.6f);
    drawRectangle(0.7f, 0.4f, 0.75f, 0.6f);

   
    glColor3f(0.84f, 0.11f, 0.14f); 
    drawCircle(0.5f, 0.5f, 0.1f, 100); 

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
    glutCreateWindow("Shahid Minar");

    init();  
    glutDisplayFunc(display); 

    glutMainLoop(); 
    return 0;
}
