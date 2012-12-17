#include <glut.h>

class shape
{
private:
	GLfloat _width;
	GLfloat _length;
	GLfloat _depth;
	bool _isVisable;
	GLfloat x,y,z;
	GLfloat *_color;

public:
	shape();
	shape(GLfloat, GLfloat*);
	shape(GLfloat, GLfloat, GLfloat*);
	shape(GLfloat, GLfloat, GLfloat, GLfloat*);

	void show();
	void hide();
	void draw();
	void move(GLfloat, GLfloat,GLfloat);
	void setColor(GLfloat*);

};