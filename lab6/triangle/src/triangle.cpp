#include "../include/triangle.h"

Node::Node() {
    x = 0;
    y = 0;
}

Node::Node(double x, double y): x(x), y(y) {}

void Node::display() {
    cout << "x: " << x << "\ty: " << y << endl;
}

void Node::updateValue(double x, double y) {
    this->x = x;
    this->y = y;
}

double pointsDistance(Node a, Node b){
    return sqrt(pow(b.x-a.x,2) + pow(b.y-a.y, 2));
}

Triangle::Triangle(Node a, Node b, Node c, string nazwa):
a(a),
b(b),
c(c),
name(nazwa)
{}

void Triangle::display(){
    cout << name << endl;
    a.display();
    b.display();
    c.display();
}

ostream &operator<<(ostream &lhs, const Triangle &rhs){
    return lhs << "nazwa: " << rhs.name << " ax = " <<rhs.a.x << " ay = " << rhs.a.y << " bx  = " << rhs.b.x << " by = " << rhs.b.y << " cx = " << rhs.c.x << " cy = " << rhs.c.y;
}

double Triangle::distance(int firstPointIndex, int secondPointIndex) {
    Node tab[3] = {a, b, c};
    return pointsDistance(tab[firstPointIndex], tab[secondPointIndex]);
}

/*void Triangle::showTriangleData(Triangle triangle) {
    cout << name << endl;
    a.display();
    b.display();
    c.display();
}

void Triangle::showTriangleData(Triangle &triangle) {
    cout << name << endl;
    a.display();
    b.display();
    c.display();
}

void Triangle::showTriangleData(Triangle *triangle) {
    cout << name << endl;
    a.display();
    b.display();
    c.display();
}*/