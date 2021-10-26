#include "../include/prostopadloscian.h"
#include <iostream>
using namespace std;


void Prostopadloscian::wypelnijProst() {
    cout << "podaj pola a, b, c" << endl;
    cin >> this->a >> this->b >> this->c;
    }

    int Prostopadloscian::poleProst() {
    int pole;
    pole = 2*(this->a + this ->b + this->c);
    return pole;
}