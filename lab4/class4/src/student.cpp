#include "../include/student.h"

void Student::wpisz() {
    cout << "imie, nazwisko, nr albumu, liczba pytan i poprawnych odpowiedzi" << endl;
    cin >> imie >> nazwisko;
    cin >> nr_albumu >> pytania >> podpowiedzi;
}

void Student::oblicz() {
    double wynik;

    wynik = (podpowiedzi/pytania) * 100;

    cout << "Srednia to: " << wynik << "%" <<endl;
}