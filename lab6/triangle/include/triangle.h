#ifndef JIPP2_NODE_H
#define JIPP2_NODE_H

#include "iostream"
#include "math.h"
using namespace std;

class Triangle;

class Node {

    double x, y;

public:

    Node();
    Node(double x, double y);

    void display();

    void updateValue(double x, double y);

    friend double pointsDistance(Node a, Node b);

    friend ostream &operator<<(ostream &lhs, const Triangle &rhs);
};

///////////////////////////////TRIANGLE//////////////////////////////////////

class Triangle{
    string name;
    Node a, b, c;

public:
    Triangle(Node a, Node b, Node c, string nazwa);

    void display();

    friend ostream &operator<<(ostream &lhs, const Triangle &rhs);

    double distance(int firstPointIndex, int secondPointIndex);

/*    void showTriangleData(Triangle triangle);

    void showTriangleData(Triangle &triangle);

    void showTriangleData(Triangle *triangle);*/
};

std::ostream &operator<<(ostream &lhs, const Triangle &rhs);

double pointsDistance(Node a, Node b);

#endif //JIPP2_NODE_H