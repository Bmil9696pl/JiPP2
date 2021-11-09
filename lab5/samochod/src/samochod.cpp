#include "../include/samochod.h"

Pojazd::Pojazd(int nrej, string name, int room, string type) :
nrej(nrej),
name(name),
room(room),
type(type)
{
    passangers = new string[room];
    for(int i = 0; i < room; i++){
        passangers[i] = "empty";
    }
}

Pojazd::Pojazd(Pojazd &cPojazd) :
nrej(cPojazd.nrej),
name(cPojazd.name),
room(cPojazd.room),
type(cPojazd.type)
{
    passangers = new string[room];
    for(int i = 0; i < room; i++){
        passangers[i] = cPojazd.passangers[i];
    }
}

void Pojazd::print() {
    cout << "Numer rejestracyjny: " << nrej << endl;
    cout << "Nazwa pojazdu: " << name << endl;
    cout << "Dostepne miejsce: " << room << endl;
    cout << "Pasazerowie: ";
    for(int i = 0; i < room; i++){
        cout << passangers[i] << ", ";
    }
    cout << endl;
    cout << "Marka i typ pojazdu: " << type << endl;
}

void Pojazd::changePass(int nr, string passanger) {
    passangers[nr] = passanger;
}

void Pojazd::nrejSet(int n){

}

int Pojazd::nrejGet(){

}

void Pojazd::nameSet(string n){

}

string Pojazd::nameGet(){

}

void Pojazd::typeSet(string n){

}

string Pojazd::typeGet(){
    
}