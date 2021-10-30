#include "../include/kula.h"

void Kula::wypelnij() {
        cout << "Podaj r" << endl;
        cin >> r;
    }

double Kula::obj() {
    return 3.14 * pow(r, 3);
}