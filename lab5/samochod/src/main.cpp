#include <iostream>
#include "../include/samochod.h"

using namespace std;



int main(){
    Pojazd a(1, "a", 5, "a");
    a.softwarePrint();
    a.softwareUpdate();
    a.softwarePrint();
    a.releaseNewUpdate("v2.1");
    a.softwareUpdate();
    a.softwarePrint();
    return 0;
}