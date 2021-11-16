#include "../include/samochod.h"

string Pojazd::newest_software = "v2.0";


Pojazd::Pojazd(int nrej, string name, int room, string type) :
nrej(nrej),
name(name),
room(room),
type(type),
software("v1.0")
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
    nrej = n;
}

int Pojazd::nrejGet(){
    return nrej;
}

void Pojazd::nameSet(string n){
    name = n;
}

string Pojazd::nameGet(){
    return name;
}

void Pojazd::typeSet(string n){
    type = n;
}

string Pojazd::typeGet(){
    return type;
}

void Pojazd::softwarePrint() {
    cout << software << endl;
}

void Pojazd::softwareUpdate() {
    software = newest_software;
}

void Pojazd::releaseNewUpdate(string a) {
    newest_software = a;
}