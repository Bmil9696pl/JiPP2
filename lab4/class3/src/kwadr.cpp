#include "../include/kwadr.h"

void FunkcjaKwadratowa::wpisz() {
    cout << "wpisz a b c" << endl;
    cin >> a >> b >> c;
}

void FunkcjaKwadratowa::wypisz() {
    cout << "f(x) = " << a << "x^2 + " << b << "x + " << c << endl;
}