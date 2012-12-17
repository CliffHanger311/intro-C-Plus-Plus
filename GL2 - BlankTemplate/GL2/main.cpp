#include <math.h>
#include <stdio.h>
#include <iostream>
#include <glut.h>
#include "shape.h"

using namespace std;



/* GLfloat arrays to specify colors */ 
static GLfloat white[]   = {1.0, 1.0, 1.0, 1.0};
static GLfloat off_white[]= {0.8, 0.8, 0.8, 1.0};
static GLfloat gray[]    = {0.5, 0.5, 0.5, 1.0};
static GLfloat orange[]  = {1.0, 0.5, 0.0, 0.5};
static GLfloat red[]     = {1.0, 0.0, 0.0, 1.0};
static GLfloat green[]   = {0.0, 1.0, 0.0, 1.0};
static GLfloat blue[]    = {0.0, 0.0, 1.0, 1.0};
static GLfloat yellow[]  = {1.0, 1.0, 0.0, 1.0}; 
static GLfloat magenta[] = {1.0, 0.0, 1.0, 1.0}; 
static GLfloat cyan[]    = {0.0, 1.0, 1.0, 1.0}; 
static GLfloat cyan_dull[]= {0.0, 0.4, 0.4, 1.0}; 

//New code for displaying Shapes
   shape s(1,1,1,green);
   static GLfloat changeColor[]    = {0.0, 1.0, 1.0, 1.0};

void writeMessage();
void init();
void reshape(int, int);
void display();
void keyboard(unsigned char, int, int);

//position of light
static GLfloat light_one[] = {0.5, 0.0, 30.0, 5.0};
// position of viewer 
static GLdouble viewer[] = {0.0, -2.0, 20.0}; 

//Postion of first triangle
GLfloat x_pos = 0.0f;
GLfloat y_pos = 0.0f;
GLfloat z_pos = 0.0f;

int counter = 0;

//to do 3d objects, add GLfloat z variable
void DrawQuad(GLfloat width, GLfloat x, GLfloat y)
{
	glBegin(GL_QUADS);
	glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, blue);
	   glVertex3f(0 + x,0 + y,0.1);
	   glVertex3f(width + x, 0 + y, 0.1);
       glVertex3f(width + x,-width + y,0.1);
	   glVertex3f(0 + x,-width + y,0.1);
   glEnd();
}

void display()
{
   /*start boiler*/
   glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
   glLoadIdentity(); 
   //set camera direction and position
   gluLookAt(viewer[0], viewer[1], viewer[2], 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
   //draw light source
   glLightfv(GL_LIGHT0, GL_POSITION, light_one);
   /*end boiler*/

   /*
	Need object, then object.draw here.
	Remove the yellow triangle stuff
   */

  s.draw();

   /*start boiler*/
   glFlush();
   glutSwapBuffers();
   /*end boiler*/
}


void keyboard(unsigned char key, int x, int y)
{
   //user interaction here
	//for shift keys(shortkeys) test for the capitol letter
	//With the s error, replace s with class variables

	switch(key)
	{
	case 'o':
		s.hide();
		break;

	case 'p':
		s.show();
		break;

	case 'w':
		s.move(0, 0.1, 0);
		break;

	case 'a':
		s.move(-0.1, 0, 0);
		break;

	case 's':
		s.move(0, -0.1, 0);
		break;

	case 'd':
		s.move(0.1, 0, 0);
		break;

	case '1':
		changeColor[0] += 0.1;
		break;

	case '2':
		changeColor[1] += 0.1;
		break;

	case '3':
		changeColor[2] += 0.1;
		break;

	case '4':
		changeColor[4] += 0.1;
		break;

	}

	s.setColor(changeColor);


	glutPostRedisplay();
}

//output in initial console
void writeMessage()
{
   //any control instructions go here
   cout << "OpenGL Demo" << endl;

   /*
   Use this function to debug in the console
   Outputting Positions coodinates to find bugs
   */

}

//allows for resizing
void reshape(int w, int h)
{
   glViewport(0, 0, (GLsizei) w, (GLsizei) h);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   gluPerspective(45.0, (GLfloat) w / (GLfloat) h, 2.0, 100.0);
   glMatrixMode(GL_MODELVIEW);
}

void init() 
{
   writeMessage(); 
   //"Background" color = white
   glClearColor(1.0, 1.0, 1.0, 1.0);
   glShadeModel(GL_SMOOTH);
   /*
   GL_FILL = Filled Shapes|GL_LINE = wire framed outline
   */
   glPolygonMode(GL_FRONT_AND_BACK,GL_FILL);
      /* GL_FILL, GL_LINE to show wireframe */
   glEnable(GL_DEPTH_TEST);
   glEnable(GL_LIGHTING);
   glEnable(GL_LIGHT0);
}

int main(int argc, char** argv)
{
   glutInit(&argc, argv);
   glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
   glutInitWindowSize(1280, 700); 
   glutInitWindowPosition(50, 50);
   glutCreateWindow(argv[0]);
   init();
   glutDisplayFunc(display); 
   glutReshapeFunc(reshape); 
   glutKeyboardFunc(keyboard);
   glutMainLoop();
   return 0;
}



/*
	Got program started with one square: 1 width
	Haven't looked for 3d depth yet, but it should be there
		-Need to be able to turn prespective, fully move around objects
		-Then start with creating a full object of a letter, or collection of objects then make the letter

	Bugs
		When moving color swithes the first couple then stops at a teal
*/