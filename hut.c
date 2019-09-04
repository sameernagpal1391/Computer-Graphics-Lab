#include<GL/glut.h>

void renderFunction()

{

glClearColor(1.0,1.0,1.0,1.0); /*specifies red,green,blue and alpha (opacity) values used by glclear to clear the color buffers*/

glClear(GL_COLOR_BUFFER_BIT);/*performs clear operation on one or more buffers at the same time*/

glColor3f(0.0,2.0,0.5);/* indicates the color for red, green and blue*/

//glOrtho(-1.0,1.0,-1.0,1.0,-1.0,1.0);/* indicates the clipping value for left, right , bottom, top, nearest and farthest value*/

glBegin(GL_POLYGON);

glVertex2f(-0.4,0.5);

glVertex2f(-0.75,0);

glVertex2f(0,0);

glEnd();

glColor3f(2.0,0.0,0.5);

glBegin(GL_POLYGON);

glVertex2f(-0.4,0.5);

glColor3f(0.0,1.0,0.0);

glVertex2f(0,0.4);

glVertex2f(0.4,0);

//glColor3f(2.0,0.0,0.5);

glVertex2f(0.7,0.5);

glVertex2f(1,0);

glVertex2f(0,0);

glEnd();

glColor3f(2.0,2.0,0.0);

glBegin(GL_POLYGON);

glVertex2f(-0.75,0);

glVertex2f(-0.75,-0.7);

glVertex2f(0,-0.7);

glVertex2f(0,0);

glEnd();

glColor3f(0.5,1.0,1.5);

glBegin(GL_POLYGON);

glVertex2f(0,0);

glVertex2f(1,0);

glVertex2f(1,-0.7);

glVertex2f(0,-0.7);

glEnd();

glFlush();

}

int main (int argc, char** argv)

{

glutInit(&argc,argv); /*initialize the toolkit*/

glutInitDisplayMode(GLUT_SINGLE);/*set the display mode*/

glutInitWindowSize(700,500);//set the window size

glutInitWindowPosition(300,300);//set the window position on the screen

glutCreateWindow("square"); //open window with a title

glutDisplayFunc(renderFunction); //screen window is redrawn

glutMainLoop();

}
