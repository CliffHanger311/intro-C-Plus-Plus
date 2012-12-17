#include <glut.h>

class square
{
private:
	GLfloat _width;
	bool _isVisable;
	GLfloat x,y;
	GLfloat *_color;
	

public:
	square();
	square(GLfloat,GLfloat*);
	void show();
	void hide();
	void draw();
	void move(GLfloat, GLfloat);
	void setColor(GLfloat*);

};