#ifndef JIPP2_PROSTOPADLOSCIAN_H
#define JIPP2_PROSTOPADLOSCIAN_H

#include <string>
#include <cmath>
#include <iostream>
using namespace std;

class Student{
    string imie;
    string nazwisko;
    int nr_albumu;
    double pytania;
    double podpowiedzi;

public:

    void wpisz();

    void oblicz();
};

#endif //JIPP2_PROSTOPADLOSCIAN_H
