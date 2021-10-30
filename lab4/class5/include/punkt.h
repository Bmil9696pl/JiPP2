#ifndef JIPP2_PROSTOPADLOSCIAN_H
#define JIPP2_PROSTOPADLOSCIAN_H

#include <string>
#include <cmath>
#include <iostream>
using namespace std;

struct punkt{
    int x;
    int y;
};

class Punkt{
    punkt a, b;

    double oblicz();

public:
    Punkt();
};

class Figura{
public:
    int n_wierzch;
    punkt* punkty;

    Figura(int n);
};

#endif //JIPP2_PROSTOPADLOSCIAN_H
