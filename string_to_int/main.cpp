#include <iostream>
using namespace std;
#include <string>
#include <stdexcept>

int konwersja(string str){
    int x;
    try {
        x = stoi(str, nullptr, 10);
    }
    catch(std::invalid_argument& e){
        cerr << e.what() << endl;
        return 0;
    }
    catch(std::out_of_range& e){
        cerr << e.what() << endl;
        return 0;
    }
    return x;
}

int main(){
    string str;
    int wynik;
    cout << "wpisz ciag znakow" << endl;
    cin >> str;
    wynik = konwersja(str);
    return wynik;
}