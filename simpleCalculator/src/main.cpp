#include <iostream>
#include "ctype.h"
using namespace std;

int main(int argc, char *argv[]){
    int wynik, a, b;
    for (int i = 0; i < argc; ++i){
        cout << "argv[" << i <<"] == " << argv[i] << endl;
    }
    if (!isalnum(static_cast<unsigned char>(*argv[1]))){
        return false;
    }
    if (!isalnum(static_cast<unsigned char>(*argv[2]))){
        return false;
    }
    a = *argv[2] - '0';
    b = *argv[3] - '0';
    if(argv[1] == "add"){
        wynik =  a + b;
    }
    return wynik;
}