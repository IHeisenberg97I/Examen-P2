#pragma once
class Ball
{
public:
    void Xvel();
    void Yvel();
    void invertXvel();
    void invertYvel();
    void setRandomPos(float _possx, float _possy);

private:
    float x_position;
    float y_position;
    bool touchx = 0;
    bool touchy = 0;
};