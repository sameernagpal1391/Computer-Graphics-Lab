#include<GL/glut.h>
void myinit(void)
{
 glClearColor(1.0,1.0,1.0,0.0);
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
 }
 
 void hut(void)
 {
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0.1,0.2,0.3);
//rectangle
	glBegin(GL_POLYGON);  
	glVertex2f (0.1, 0.1);
        glVertex2f (0.4, 0.1);
        glVertex2f (0.4, 0.5);
        glVertex2f (0.1, 0.5);
    glEnd();
glColor3f(1.0,0.2,0.1);
//triangle
	glBegin(GL_POLYGON);
	glVertex2f (0.10, 0.5);
        glVertex2f (0.4, 0.5);
        glVertex2f (0.25, 0.75);
       glEnd();
glColor3f(0.2,1.0,0.2);
//right rectangle
	glBegin(GL_POLYGON);
	glVertex2f (0.4, 0.1);
        glVertex2f (0.8, 0.4);
        glVertex2f (0.8, 0.75);
        glVertex2f (0.4, 0.5);
    glEnd();
glColor3f(0.4,0.2,0.4);
//upper rectangle
	glBegin(GL_POLYGON);
	glVertex2f (0.4, 0.5);
        glVertex2f (0.8, 0.75);
        glVertex2f (0.62, 0.93);
        glVertex2f (0.25, 0.75);
    glEnd();

glColor3f(0.2,1.0,0.2);
//inner rectangle
	glBegin(GL_POLYGON);
	glVertex2f (0.15, 0.25);
        glVertex2f (0.25, 0.25);
        glVertex2f (0.25, 0.35);
        glVertex2f (0.15, 0.35);
    glEnd();
/*glColor3f(0.22,0.12,0.14);
	glBegin(GL_POLYGON);
	glVertex2f (0.6, 0.25);
        glVertex2f (0.7, 0.3);
        glVertex2f (0.6, 0.25);
        glVertex2f (0.7, 0.25);
    glEnd();*/
glFlush();
}
int main(int argc,char** argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowPosition(50,100);
glutInitWindowSize(640,480);
glutCreateWindow("hut");
myinit();
glutDisplayFunc(hut);
glutMainLoop();
}
