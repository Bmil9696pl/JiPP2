#ifndef SAMOCHOD_H
#define SAMOCHOD_H

#include <iostream>
#include "math.h"
using namespace std;

class Vector{
private:
    double x, y;

public:
    Vector();

    Vector(double x, double y);

    double length();

    Vector operator+(const Vector &rhs) const;

    Vector operator+=(const Vector &rhs);

    Vector operator-(const Vector &rhs);

    Vector operator*(const double &sk);

    void print();

    friend ostream &operator<<(ostream & lhs, const Vector &rhs);

    friend Vector operator*(const double &lhs, const Vector &rhs);

    /*
    otrzymywać wektor przeciwny t
    dodawać t
    odejmować t
    iloczyn skalarny t
    mnożenie przez skalar t
    porównywać wektory t
    */
    Vector operator~();

    bool operator<(const Vector &rhs);

    bool operator>(const Vector &rhs);

    bool operator==(const Vector &rhs);

    double operator*(const Vector &rhs);
};
ostream &operator<<(ostream & lhs, const Vector &rhs);

Vector operator*(const double &lhs, const Vector &rhs);

class Imaginary{
    double x, i;

public:
    Imaginary();

    Imaginary(double x, double y);

    double length();

    Imaginary operator+(const Imaginary &r) const;

    Imaginary operator+=(const Imaginary &r);

    Imaginary operator-(const Imaginary &r);


};


#endif //SAMOCHOD_H
