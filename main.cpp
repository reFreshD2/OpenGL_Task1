#include <GL/glut.h>
#include <math.h> 
#define PI 3.14159265

void display() {
	glClear(GL_COLOR_BUFFER_BIT); 
	glPushMatrix();
	glLoadIdentity();
	int a = -30;
	double dx = 0.25*cos(a*PI/180);
	double dy = 0.25*sin(a*PI/180);
	glLineWidth(2);
	glBegin(GL_LINES);
	glColor3d(1, 0, 0);
	glVertex2f(0, 0);
	glVertex2f(0.25, 0);
	glColor3d(0, 1, 0);
	glVertex2f(0, 0);
	glVertex2f(dx, dy);
	glEnd();
	glFlush();
	glPopMatrix();
	glutSwapBuffers();
}


int main(int argc, char * argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(600, 600);
	glutCreateWindow("Ex 1");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
