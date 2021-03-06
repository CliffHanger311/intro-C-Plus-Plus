#include <math.h>
#include <stdio.h>
#include <iostream>
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

//Create shape 
   shape s(1,1,1,gray);
   static GLfloat changeColor[4];

   //Dimension of window
static int ww = 1280;
static int wh = 700;

   //Array to hold all shapes
   const int letterHeight = 10;
   const int letterLength = 5;
   shape* allShapes[letterLength];
   void drawLetter();

void writeMessage();
void init();
void reshape(int, int);
void display();
void keyboard(unsigned char, int, int);

/*
	position of light
	{x,y,z,UnK}
*/
static GLfloat light_one[] = {0.5, 0.0, 30.0, 5.0};

/*
	position of viewer
	{x,y,z}
*/
static GLdouble viewer[] = {0.0, -2.0, 20.0}; 

//Postion of first shape
GLfloat x_pos = 0.0f;
GLfloat y_pos = 0.0f;
GLfloat z_pos = 0.0f;

int moveCounter = 0;

//do all rendering here, "should" only call .draw on objects
void draw(GLenum mode)
{
	//loop through squares array and draw
	/*for (int i = 0; i < letterLength; i++)
	{
		if (mode == GL_SELECT) glLoadName(allShapes[i]->getName());
		allShapes[i]->draw();
	}*/

	s.draw();
	s.setLimits(10, -10, -15, 15);

	//force update (only if we changed something, should have this in mouse or keyboard functions
	glutPostRedisplay();
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

  /*for (int i = 0; i < letterLength; i++)
   {
	   allShapes[i]->move();
	   allShapes[i]->rotate();
   }*/

    draw(GL_RENDER);

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
		//Show/Hide Toggle
	case 'o':
		s.hide();
		break;
	case 'p':
		s.show();
		break;

		//Movement of the object
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
	case 'q':
		s.move(0, 0, 0.1);
		break;
	case 'e':
		s.move(0, 0, -0.1);
		break;

		//Change Color of object
	case '1':
		//Red
		s.setColor(red);
		break;
	case '2':
		//Green
		s.setColor(green);
		break;
	case '3':
		//Blue
		s.setColor(blue);
		break;
	case '4':
		//Yellow
		s.setColor(yellow);
		break;

		//Controls for Light
	case '[':
		light_one[1] -= 2.5f;
		break;
	case ']':
		light_one[1] += 2.5f;
		break;

		//Zoom in and out
	case '+':
		viewer[2] += 0.5f;
		break;
	case '-':
		viewer[2] -= 0.5f;
		break;

/*
	//Other viewer movements
	case 'a':
		viewer[0] -= 0.5f;
		break;
	case 's':
		viewer[1] -= 0.5f;
		break;
	case 'd':
		viewer[0] += 0.5f;
		break;
	case 'w':
		viewer[1] += 0.5f;
		break;
		
	//Otherlight Adjustments
	case 'i':
		light_one[2] += 2.5f;
		break;
	case 'm':
		light_one[2] -= 2.5f;
		break;
*/

	}
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

void initialize()
{
	//create all of our shapes
	GLfloat tempColor[4] = {0.0, 0.0, 1.0, 1.0};
	for (int i = 0; i < letterLength; i++)
	{
		allShapes[i] = new shape;

		allShapes[i]->move(rand() % 10, rand() % 10);
		//set color
		allShapes[i]->setColor(tempColor);
		//new random color
		tempColor[0] = (rand() % 10) /(float) 10;
		tempColor[1] = (rand() % 10) / (float) 10;
		tempColor[2] =  (rand() % 10) /(float) 10;
		//set negative or positive value
		
		allShapes[i]->setLimits(10, -10, -15, 15);
		//set different z values so we dont get overlap
        //allShapes[i]->z = i / (float) 100;
		allShapes[i]->setName((GLint) i);
		
		cout << allShapes[i] << endl;
	}
}

void init() 
{
   writeMessage(); 
   //"Background" color = white
   glClearColor(1.0, 1.0, 1.0, 1.0);
   glShadeModel(GL_SMOOTH);
   glPolygonMode(GL_FRONT_AND_BACK,GL_FILL);
   /* GL_FILL, GL_LINE to show wireframe */
   glEnable(GL_DEPTH_TEST);
   glEnable(GL_LIGHTING);
   glEnable(GL_LIGHT0);
   initialize();
}

int main(int argc, char** argv)
{
   glutInit(&argc, argv);
   glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
   //glutInitWindowSize(1280, 700); 
   glutInitWindowSize(ww, wh); 
   glutInitWindowPosition(50, 50);
   glutCreateWindow(argv[0]);
   init();
   //pass display delegate
   glutDisplayFunc(display); 
   glutReshapeFunc(reshape); 
   glutKeyboardFunc(keyboard);
   //glutMouseFunc(mouseClick); 
   //glutMotionFunc(mouseMove);
   glutMainLoop();
   return 0;
}



/*
	Got program started with one square: 1 width
	Haven't looked for 3d depth yet, but some code is set up for it
		-Need to be able to turn prespective, full movement would be nice
		***Start with creating a full object of a letter, or collection of objects then make the letter

	Bugs
		color changes are a step behind button press
		have limits sets, but aren't functioning
*/