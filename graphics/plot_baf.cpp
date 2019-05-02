// https://www.khronos.org/registry/OpenGL-Refpages/gl2.1/xhtml/glOrtho.xml
// g++ plot_ahk_xy_0.cpp -lglut -lGL -o a.o
#include <iostream>
#include <cmath>
#include <stdio.h>
#include "GL/glut.h"
#include "GL/gl.h"
using namespace std;
void plot2Dpoint(float x,float y, float red, float green, float blue){
  glColor3f(red, green, blue);
    glVertex2f(x, y);
}

void drawPoints()
{
    float x,y;
    float h,k;
    float red = 1.0,green = 0.0 ,blue = 0.0;
    //glClearColor(red,green,blue,alpha);
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);
    //void glOrtho(GLdouble left,  GLdouble right,
    //GLdouble bottom,  GLdouble top,
    //GLdouble nearVal,  GLdouble farVal);
    glOrtho(-20.0, 20.0, 20.0, -20.0, -20.0, 20.0);
    h = -0.5; k = -0.5;
    glPointSize(3.0);
    glBegin(GL_POINTS);// points
    //plot x axis
    for (x = -20; x <= 20; x= x+2){
      h = x;  k = 0; plot2Dpoint(h,k,1,1,1);
    }//end x
    //plot y axis
    for (y = -20; y <= 20; y= y+2){
      h = 0;  k = y; plot2Dpoint(h,k,1,1,1);
    }//end x

    //plot y = a(x-k)^2 + k;
    for (x = -20; x <= 20; x=x+0.005){
      h = x;
      k = (float)pow(x,4);
        cout<<"points "<<h<<" "<<k<<endl;
        plot2Dpoint(h,k,0,0,1);
      if (green > 1)green = 0;
    }//end j
	// plot y = x^2
    for (x = -20; x <= 20; x=x+0.005){
      h = x;
      k = (float)(-4*pow(x/10,3));
        cout<<"points "<<h<<" "<<k<<endl;
        plot2Dpoint(h,k,1,0,0);
      if (green > 1)green = 0;
    }//end j

    glEnd();//end points

    glutSwapBuffers();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("OpenGL -800x800");
    glutDisplayFunc(drawPoints);
    glutMainLoop();
    return 0;
}
