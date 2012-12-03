#include <math.h>
#include <stdio.h>
#include <iostream>
#include <glut.h>
#include "Square.h"

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



//New code for displaying square
   square s(4, green);
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

//x postion of first triangle
GLfloat x_pos = 0.0f;

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




   ////yellow triangle
   //glBegin(GL_TRIANGLES);
   //    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, yellow);
	  // glVertex3f(-10,0,0);
	  // glVertex3f(-10,-5,0);
   //    glVertex3f(-5,-5,0);
   //glEnd();

   // //blue square
   //glBegin(GL_QUADS);
   //    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, blue);
	  // glVertex3f(-2,2,0);
	  // glVertex3f(2,2,0);
   //    glVertex3f(2,-2,0);
	  // glVertex3f(-2,-2,0);
   //glEnd();


     
   //call class methods
   s.draw();

   //int move_counter;
   //move_counter++;
   //if (move_counter)
   //{
	  // //s.move();
   //}






   /*start boiler*/
   glFlush();
   glutSwapBuffers();
   /*end boiler*/
}


void keyboard(unsigned char key, int x, int y)
{
	//user interaction here
	//for shift keys(shortkeys) test for the capitol letter

	switch(key)
	{
	case 'o':
		s.hide();
		break;

	case 'p':
		s.show();
		break;

	case 'w':
		s.move(0, 0.1);
		break;

	case 'a':
		s.move(-0.1, 0);
		break;

	case 's':
		s.move(0, -0.1);
		break;

	case 'd':
		s.move(0.1, 0);
		break;

	case 'r':
		changeColor[0] += 0.1;
		break;

	case 'g':
		changeColor[1] += 0.1;
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
   //GL_FILL = Filled Triangles|GL_LINE = wire framed outline
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