#include <stdio.h>
#include <GL\freeglut.h>

void Init(){

	glClearColor(0.0, 0.0, 0.0, 0.0); //black background
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-1.0f, 1.0f, -1.0f, 1.0f, 1.0f, 0.0f);
}