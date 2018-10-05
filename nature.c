#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <time.h> 
#define PI acos(-1.0)



void divider()
{
	glColor3f (1.0,1.0,1.0);

	glBegin(GL_POLYGON);
	glVertex3f (0.2,0.1,0);
		glVertex3f (-0.2,0.1,0);
		glVertex3f (-0.2,-0.1,0);
		glVertex3f (0.2,-0.1,0);
		glEnd();
}

void divider2()
{
	glColor3f (1.0,1.0,1.0);

	glBegin(GL_POLYGON);
	glVertex3f (0.2,0.1,0);
		glVertex3f (-0.2,0.1,0);
		glVertex3f (-0.2,-0.1,0);
		glVertex3f (0.2,-0.1,0);
		glEnd();
}

void divider3()
{
	glColor3f (1.0,1.0,1.0);

	glBegin(GL_POLYGON);
	glVertex3f (1.88,1.75,0);
		glVertex3f (1.88,2.65,0);
		glVertex3f (1.95,2.65,0);
		glVertex3f (1.95,1.75,0);
		glEnd();
}

void divider4()
{
	glColor3f (1.0,1.0,1.0);

	glBegin(GL_POLYGON);
	glVertex3f (1.88,1.75,0);
		glVertex3f (1.88,2.65,0);
		glVertex3f (1.95,2.65,0);
		glVertex3f (1.95,1.75,0);
		glEnd();
}

void tringle1()
{
	glColor3f (0.0,0.0,0.0);

	glBegin(GL_POLYGON);
		glVertex3f (1,1,0);
		glVertex3f (1.5,-0.40,0);
		glVertex3f (1,-1,0);
	
		glEnd();
}

void tringle2()
{
	glColor3f (0.0,0.0,0.0);

	glBegin(GL_POLYGON);
		glVertex3f (1.5,1.75,0);
		glVertex3f (2.30,1.75,0);
		glVertex3f (2.15,0.85,0);
	
		glEnd();
}


void rec()
{
	glColor3f (0.0, 0.0, 0.0);

    glBegin(GL_POLYGON);
     glVertex3f (2.30,1.75,0);
    glVertex3f (1.5,1.75,0);
    glVertex3f (1.5,6,0);	
    glVertex3f (2.30,6,0);
	glEnd();
}

void curve()
{
	glColor3f (0.0,0.0,0.0);

	glBegin(GL_POLYGON);
	glVertex3f (1,1,0);
	glVertex3f (1.5,1.75,0);
	glVertex3f (2.15,0.85,0);
	glVertex3f (1.5,-0.40,0);

	//glVertex3f (1.5,1.75,0);
	//glVertex3f (2.30,1.75,0);
	//glVertex3f (2.20,1.50,0);
	//glVertex3f (1.25,-0.5,0)
	//glVertex3f (1,-1,0);

	glEnd();
}

void curve2()
{
	glColor3f (1.0,1.0,1.0);

	glBegin(GL_POLYGON);
	glVertex3f (1.40,.65,0);
	glVertex3f (1.70,1.15,0);
	glVertex3f (1.74,1,0);
	glVertex3f (1.45,0.5,0);
	glEnd();
}

void display(void)
{

    glClear(GL_COLOR_BUFFER_BIT);

 	glColor3f (0.0, 0.0, 0.0);
	
	glBegin(GL_POLYGON); ////// street
      glVertex3f (1, 1, 0);
      glVertex3f (-3, 1, 0);
      glVertex3f (-3, -1, 0);	
      glVertex3f (1, -1, 0);
	glEnd();

	//glColor3f (1.0, 1.0, 1.0);

glPushMatrix();
rec();
glPopMatrix();

glPushMatrix();
curve();
glPopMatrix();

glPushMatrix();
curve2();
glPopMatrix();

glPushMatrix();
tringle1();
glPopMatrix();

glPushMatrix();
tringle2();
glPopMatrix();

glPushMatrix();
divider();
glTranslatef(-.9,0,0);
divider();
glPopMatrix();

glPushMatrix();
divider();
glTranslatef(-1.8,0,0);
divider();
glPopMatrix();

glPushMatrix();
divider();
glTranslatef(-2.7,0,0);
divider();
glPopMatrix();

glPushMatrix();
divider();
glTranslatef(0.9,0,0);
divider();
glPopMatrix();

glPushMatrix();
divider3();
glTranslatef(0,1.8,0);
divider3();
glPopMatrix();

glPushMatrix();
divider3();
glTranslatef(0,3.6,0);
divider3();
glPopMatrix();

	glFlush();


}



void init(void) 
{
	glClearColor(1.0, 1.0, 1., 1.0);
	glOrtho(-3, 4, -4, 6, -2, 2);
}


int main()
{
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (1366, 768); 
	glutInitWindowPosition (0, 0);
	glutCreateWindow ("Nature");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;   /* ANSI C requires main to return int. */
}

