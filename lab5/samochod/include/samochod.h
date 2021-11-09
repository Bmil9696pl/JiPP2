#ifndef SAMOCHOD_H
#define SAMOCHOD_H

#include <iostream>

using namespace std;

class Pojazd{

    int nrej;
    string name;
    int room;
    string* passangers;
    string type;

public:

    Pojazd(int nrej, string name, int room, string type);

    Pojazd(Pojazd &cPojazd);

    void print();

    void changePass(int nr, string passanger);

    void nrejSet(int n);

    int nrejGet();

    void nameSet(string n);

    string nameGet();

    void typeSet(string n);

    string typeGet();
};

#endif //SAMOCHOD_H
