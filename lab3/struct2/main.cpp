#include <iostream>
using namespace std;

struct samochod{
    string marka;
    string model;
    int rok;
    string kolor;
    string SZYBY;
};

struct zliczanie{
    int liczba;
    string marka;
};

int liczenie_samochodow(samochod* s, zliczanie *liczba){
    int a = 0;
    bool bul = 0;
    for(int i = 0; i<4; i++){
        for(int j = 0; j<4; j++){
            if(s[i].marka == liczba[j].marka){
                liczba[j].liczba++;
                bul = 1;
            }
        }
        if(bul == 0){
            liczba[a].liczba = 1;
            liczba[a].marka = s[i].marka;
            a++;
        }
        bul = 0;
    }
    for(int i = 0; i<a; i++){
        cout <<liczba[i].marka << "--" << liczba[i].liczba <<endl;
    }
    return 0;
}

int stary_samochod(samochod* s){
    int a;
    for(int i = 0; i < 4; i++){
        if(i == 0){
            a = s[i].rok;
        }
        else{
            if(s[i].rok < a){
                a = s[i].rok;
            }
        }
    }
    return a;
}

int main(){
    samochod garaz[4] = {{"mercedes", "benz", 1998, "czerwony"},
                         {"voltzwagen", "golf", 2002, "granatowy", "ZE MNA PITBUL"},
                         {"mercedes", "A", 2000, "czarny", "NA TYLNYCH SIEDZENIACH"},
                         {"mercedes", "B", 2000, "zielony", "AMOGUS"}};
    zliczanie* liczba = new zliczanie[4];
    liczenie_samochodow(garaz, liczba);
    cout << stary_samochod(garaz) << endl;
    return 0;
}