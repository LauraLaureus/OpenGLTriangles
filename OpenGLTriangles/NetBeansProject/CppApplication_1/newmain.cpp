/* 
 * File:   newmain.cpp
 * Author: usuario
 *
 * Created on 2 de febrero de 2016, 10:08
 */

#include <stdio.h>

using namespace std;

#include <GL\freeglut.h>

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

void Init(){
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1.0f, 1.0f, -1.0f, 1.0f, 1.0f, 0.0f);
}

int main(int argc, char *argv[]){
    glutInit(&argc, argv);
    glutInitWindowPosition(300, 300);
    glutInitWindowSize(500, 500);
    glutInitDisplayMode(GLUT_RGBA | GLUT_SINGLE);
    glutCreateWindow("FromNetBeans Laura");
    Init();
    glutDisplayFunc(Display);
    glutMainLoop();
    return 0;
}


