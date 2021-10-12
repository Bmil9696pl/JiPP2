#include <string>
#include <iostream>
#include "../include/calc.h"
using namespace std;

int main(int argc, char *argv[]){
    string bababooey = argv[1];
    if(argc != 2){
        help();
        return 0;
    }
    if(bababooey == "add"){
        cout << add() << endl;
        return 0;
    }
    if(bababooey == "substract"){
        cout << substract() << endl;
        return 0;
    }
    if(bababooey == "volume"){
        cout << volume() << endl;
        return 0;
    }
    if(bababooey == "help"){
        help();
        return 0;
    }
    help();
    return 0;
}