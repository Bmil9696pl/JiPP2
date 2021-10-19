#include <iostream>
using namespace std;

int dzielenie(int a, int b){
    int wynik = a/b;
    if(a < b){
        throw invalid_argument("ERROR: liczba dzielona jest mniejsza od dzielnika");
    }
    if(a != wynik*b){
        throw invalid_argument("ERROR: wynik dzielenia nie jest liczba naturalna");
    }
    return wynik;
}

int main(){
    int a, b;
    cout << "Wpisz dzieloną i dzielnik" << endl;
    cin >> a;
    cin >> b;
    try{
        cout << dzielenie(a, b) << endl;
    }
    catch(invalid_argument& e){
        cerr << e.what() << endl;
        return -1;
    }
    return 0;
}