#include "../include/punkt.h"

Punkt::Punkt() {
    cout << "wpisz wspolrzedne punktu A" << endl;
    cin >> a.x >> a.y;

    cout << "wpisz wspolrzedne punktu B" << endl;
    cin >> b.x >> b.y;

    cout << oblicz() << endl;
}

double Punkt::oblicz() {
    return sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y), 2));
}

Figura::Figura( int n ){
    n_wierzch = n;
    punkty = new punkt[n_wierzch]();
    for (int i = 0; i < n_wierzch; i++){
        cout << "Podaj wspolrzedne wierzcholka nr. " << i + 1 << endl;
        cin >> punkty[i].x >> punkty[i].y;
    }
}