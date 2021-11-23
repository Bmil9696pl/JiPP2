#ifndef JIPP2_NODE_H
#define JIPP2_NODE_H

#include "iostream"
using namespace std;

struct point{
    double x, y;
};

class Figure{
    string name, color;
public:
    virtual double getArea() = 0;
};

class Circle: public Figure{
    double r;
public:
    Circle(double r);
    double getArea();
};

class Triangle: public Figure{
    point a, b, c;
public:
    double pole();
    double obwod();
};

#endif //JIPP2_NODE_H