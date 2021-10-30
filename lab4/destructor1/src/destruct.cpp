#include "../include/destruct.h"
#include <iostream>

Destruct::Destruct()
: tab(new int [1024])
{
}

Destruct::~Destruct() {
    cout<< "destruktor nie został wywolany" << endl;
    delete [] tab;
}

void Destruct::pauza() {
    system("PAUSE");
}