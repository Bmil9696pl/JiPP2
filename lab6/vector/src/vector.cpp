#include "../include/vector.h"

Vector::Vector(): x(0), y(0) {}

Vector::Vector(double x, double y) : x(x), y(y) {}

double Vector::length() {
    return sqrt(x * x + y * y);
}

Vector Vector::operator+(const Vector &rhs) const {
    return {x + rhs.x, y + rhs.y};
}

Vector Vector::operator+=(const Vector &rhs) {
    this->x = this->x + rhs.x;
    this->y = this->y + rhs.y;
    return *this;
}

Vector Vector::operator-(const Vector &rhs) {
    return {x - rhs.x, y - rhs.y};
}

void Vector::print() {
    cout << "x= " << x << endl;
    cout << "y= " << y << endl;
}

Vector Vector::operator*(const double &sk) {
    return {x*sk, y*sk};
}

Vector operator*(const double &lhs, const Vector &rhs){
    return {rhs.x * lhs, rhs.y * lhs};
}

Vector Vector::operator~() {
    return{x*(-1), y*(-1)};
}


double Imaginary::length() {
    return sqrt(x*x + i*i);
}

bool Vector::operator<(const Vector &rhs){
    if(x<rhs.x && y< rhs.y){
        return true;
    }
    else return false;
}

bool Vector::operator>(const Vector &rhs){
    if (x > rhs.y && y > rhs.y){
        return true;
    }
    else return false;
}

bool Vector::operator==(const Vector &rhs){
    if (x == rhs.x  && y == rhs.x){
        return true;
    }
    else return false;
}

double Vector::operator*(const Vector &rhs) {
    return x*rhs.x+y*rhs.y;
}

ostream &operator<<(ostream &lhs, const Vector &rhs){
    return cout << rhs.x << " " << rhs.y;
}


/////////////////////////////////Imaginary//////////////////////////////////////////

Imaginary::Imaginary(): x(0), i(0) {}

Imaginary::Imaginary(double x, double y):x(x), i(y) {}

Imaginary Imaginary::operator-(const Imaginary &r) {
    return {x - r.x, i - r.i};
}

Imaginary Imaginary::operator+(const Imaginary &r) const {
    return {x + r.x, i + r.i};
}

Imaginary Imaginary::operator+=(const Imaginary &r) {
    this->x = this->x + r.x;
    this->i = this->i + r.i;
    return *this;
}