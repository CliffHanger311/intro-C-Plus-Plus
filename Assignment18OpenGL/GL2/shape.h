#include <stdlib.h>
#include <glut.h>
#include <iostream>
#include <string>

class shape
{
private:
	GLfloat _width, _length, _depth;
	bool _isVisable;
	GLfloat x,y,z;
	GLfloat *_color;
	GLfloat _angle;
	GLfloat _angleIncrement_x, _angleIncrement_y, _angleIncrement_z;
	GLfloat _top, _bottom, _left, _right;
	GLint _name;

	//string _type;
	GLfloat getNewVelocity();
	int getNegative();

public:
	shape();
	shape(GLfloat, GLfloat*);
	shape(GLfloat, GLfloat, GLfloat*);
	shape(GLfloat, GLfloat, GLfloat, GLfloat*);

	void show();
	void hide();

	//void draw();
	void virtual draw();
	
	void move();
	void move(GLfloat, GLfloat);
	void move(GLfloat,GLfloat,GLfloat);

	void setLimits(GLfloat, GLfloat, GLfloat, GLfloat);
	void setColor(GLfloat*);
	
	GLint getName();
	void setName(GLint);

	bool isRotating;
	void rotate();

	//string getType();
	GLfloat _velocity_x;
	GLfloat _velocity_y;
};