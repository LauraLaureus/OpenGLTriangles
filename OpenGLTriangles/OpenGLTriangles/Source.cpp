#include <stdio.h>
#include <GL\freeglut.h>

void Init(){

	glClearColor(0.0, 0.0, 0.0, 0.0); //black background
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-1.0f, 1.0f, -1.0f, 1.0f, 1.0f, 0.0f);
}

void Display(){

	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.0f, 0.0f);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(1.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2f(0.0f, 1.0f);

	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(-1.0f, 0.0f);
	glVertex2f(0.0f, -1.0f);

	glEnd();

	glFlush();
}

int main(int argc, char *argv[]){
	glutInit(&argc, argv);
	glutInitWindowPosition(100, 200);
	glutInitWindowSize(300, 200);
	glutInitDisplayMode(GLUT_RGBA | GLUT_SINGLE);
	glutCreateWindow("OpenGL Práctica 1_1 Laura");
	Init();
	glutDisplayFunc(Display);
	glutMainLoop();
	return 0;
}


