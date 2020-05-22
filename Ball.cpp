#include <cmath>
#include <iostream>
#include "Ball.h"
#include <GL/freeglut.h>
using namespace std;

#define PI 3.1415926535
#define PI2 3.1415926535*2

void Ball::setRandomPos(float _possx, float _possy)
{
    x_position = _possx;
    y_position = _possy;
}


void Ball::Xvel()
{
    if (touchx == 1) 
    {
        if (x_position < 9)
        {
            x_position += 0.15;
        }
    }

    else if (touchx == 0) 
    {
        if (x_position > -20)
        {
            x_position -= 0.30;

        }
    }
}

void Ball::Yvel()
{
    if (touchy == 1) 
    {
        if (y_position < 20)
        {
            y_position += 0.20;
        }
    }

    else if (touchy == 0) 
    {
        if (y_position > -10)
        {
            y_position -= 0.10;

        }
    }
}

void Ball::invertXvel()
{
    if (touchx == 1) 
    {
        if (x_position < 10)
        {
            x_position += 0.20;
        }
    }

    else if (touchx == 0) 
    {
        if (x_position > -20)
        {
            x_position -= 0.30;

        }
    }
}

void Ball::invertYvel()
{
    if (touchy == 1) 
    {
        if (y_position < 20)
        {
            y_position += 0.20;
        }
    }

    else if (touchy == 0) 
    {
        if (y_position > -10)
        {
            y_position -= 0.20;

        }
    }
}