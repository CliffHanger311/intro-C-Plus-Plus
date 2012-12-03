#include "Square.h"

//GLfloat _width;


//square();
square::square()
{
	_width = 5.0f;
	_isVisable = true;
	x = 0;
	y = 0;
}

//square(GLfloat);
square::square(GLfloat width, GLfloat * color)
{
	_width = width;
	_isVisable = true;
	x = 0;
	y = 0;

	_color = new GLfloat[4];
	_color[0] = color[0];
	_color[1] = color[1];
	_color[2] = color[2];
	_color[3] = color[3];
}

//void show();
void square::show()
{
	_isVisable = true;
}

//void hide();
void square::hide()
{
	_isVisable = false;
}

void square::draw()
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

void square::move(GLfloat move_x, GLfloat move_y)
{
	x += move_x;
	y += move_y;
}

void square::setColor(GLfloat* color)
{
	_color[0] = color[0];
	_color[1] = color[1];
	_color[2] = color[2];
	_color[3] = color[3];
}
