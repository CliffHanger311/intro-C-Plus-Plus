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
	y = 0;
	z = 0;

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
	z = 0;

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
	//Code to draw square
		glPushMatrix();
		glTranslatef(x, y, z);
		glRotatef(_angle, 0.0f, 0.0f, 1.0f);
		glBegin(GL_QUADS);
			glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, _color);
			glVertex3f(-_width/2,_length/2,_depth);
		    glVertex3f(_width/2,_length/2,_depth);
            glVertex3f(_width/2,-_length/2,_depth);
	        glVertex3f(-_width/2,-_length/2,_depth);
		glEnd();
	 glPopMatrix();
   }
}


//move the square x and y values 
void shape::move(GLfloat move_x, GLfloat move_y)
{
	x += move_x;
	y += move_y;
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

GLint shape::getName()
{
	return _name;
}

void shape::setName(GLint name)
{
	_name = name;
}

void shape::rotate()
{
	if (isRotating)
	{
		_angle += _angleIncrement_x;
	}
}