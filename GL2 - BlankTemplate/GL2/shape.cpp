#include "shape.h"

//square();
shape::shape()
{
	_width = 1.0f;
	_length = 1.0f;
	_isVisable = true;
	x = 0;
	y = 0;
	z = 0;
}

//square(GLfloat);
shape::shape(GLfloat width, GLfloat * color)
{
	_width = width;
	_isVisable = true;
	x = 0;
	

	_color = new GLfloat[4];
	_color[0] = color[0];
	_color[1] = color[1];
	_color[2] = color[2];
	_color[3] = color[3];
}

shape::shape(GLfloat width, GLfloat length, GLfloat * color)
{
	_width = width;
	_length = length;
	_isVisable = true;
	x = 0;
	y = 0;

	_color = new GLfloat[4];
	_color[0] = color[0];
	_color[1] = color[1];
	_color[2] = color[2];
	_color[3] = color[3];
}

shape::shape(GLfloat width, GLfloat length, GLfloat depth, GLfloat * color)
{
	_width = width;
	_length = length;
	_depth = depth;
	_isVisable = true;

	x = 0;
	y = 0;
	z = 0;

	_color = new GLfloat[4];
	_color[0] = color[0];
	_color[1] = color[1];
	_color[2] = color[2];
	_color[3] = color[3];
}

//void show();
void shape::show()
{
	_isVisable = true;
}

//void hide();
void shape::hide()
{
	_isVisable = false;
}

void shape::draw()
{
	if (_isVisable)
	{
	//Code for color blue
	static GLfloat blue[]    = {0.0, 0.0, 1.0, 1.0};

	//Code to draw square
	glBegin(GL_QUADS);
       glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, _color);
	   glVertex3f(-_width/2 + x,_width/2 + y,0);
	   glVertex3f(_width/2 + x,_width/2 + y,0);
       glVertex3f(_width/2 + x,-_width/2 + y,0);
	   glVertex3f(-_width/2 + x,-_width/2 + y,0);
   glEnd();
   }
}

void shape::move(GLfloat move_x, GLfloat move_y, GLfloat move_z)
{
	x += move_x;
	y += move_y;
	z += move_z;
}

void shape::setColor(GLfloat* color)
{
	_color[0] = color[0];
	_color[1] = color[1];
	_color[2] = color[2];
	_color[3] = color[3];
}