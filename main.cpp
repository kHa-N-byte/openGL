#include <windows.h>
#include <GL/glut.h>

void AxisXY(){
glLineWidth(0.1);

glBegin(GL_LINES);

glColor3f(0.0f, 0.0f, 0.0f);



glVertex2f(-0.25f, 0);

glVertex2f(0.25f, 0);



glVertex2f(0, 0.25f);
glVertex2f(0, -0.25f);




glEnd();

}
void Square(){
glLineWidth(2);

glBegin(GL_POLYGON);

glColor3f(1.0f, 0.0f, 0.0f);



glVertex2f(-0.2f, 0.15f);

glVertex2f(-0.05f,0.15f);



glVertex2f(-0.05f, 0.05f);
glVertex2f(-0.2f, 0.05f);




glEnd();

}
void Square2(){
glLineWidth(2);

glBegin(GL_POLYGON);

glColor3f(0.0f, 1.0f, 0.0f);



glVertex2f(0.05f, 0.13f);

glVertex2f(0.15f,0.13f);



glVertex2f(0.15f, 0.07f);
glVertex2f(0.05f, 0.07f);




glEnd();

}
void ArraowHead(){
glLineWidth(2);

glBegin(GL_TRIANGLES);

glColor3f(0.0f, 1.0f, 0.0f);



glVertex2f(0.15f, 0.15f);

glVertex2f(0.15f,0.05f);



glVertex2f(0.22f, 0.10f);





glEnd();

}
void Triangle1(){
glLineWidth(2);

glBegin(GL_TRIANGLES);

glColor3f(1.0f, 0.0f, 1.0f);



glVertex2f(-0.10f, -0.05f);

glVertex2f(-0.10f, -0.20f);

glVertex2f(-0.22f, -0.12f);





glEnd();

}
void Triangle2(){
glLineWidth(2);

glBegin(GL_TRIANGLES);

glColor3f(1.0f, 1.0f, 0.0f);



glVertex2f(0.05f, -0.2f);

glVertex2f(0.25f, -0.2f);

glVertex2f(0.15f, -0.1f);





glEnd();

}



void display() {

glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

glClear(GL_COLOR_BUFFER_BIT);


AxisXY();
Square();
Square2();
ArraowHead();
Triangle1();
Triangle2();

glFlush();

}



int main(int argc, char** argv) {

glutInit(&argc, argv);

glutCreateWindow("CG Setup");

glutInitWindowSize(820, 620);

glutDisplayFunc(display);

glutMainLoop();
return 0;

}

