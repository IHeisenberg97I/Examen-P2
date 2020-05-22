#include <iostream>
#include <cmath>
#include <time.h>
#include <Windows.h>
#include <GL\glew.h>
#include <GL\freeglut.h>
#include "Ball.h"
using namespace std;

#define PI 3.1415926535
#define PI2 3.1415926535*2

Ball circle1;
Ball circle2;
Ball circle3;
Ball circle4;

int main(int argc, char** argv)
{
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(500, 500);

	circle1.setRandomPos(-1, 1);
	circle2.setRandomPos(-2, -1);
	circle3.setRandomPos(2, 1);
	circle4.setRandomPos(1, -1);

	glutInit(&argc, argv);

	glutCreateWindow("Ball");
}