#include <iostream>
using namespace std;

struct samochod{
    string marka;
    string model;
    int rok;
    string kolor;
    string SZYBY;
};

int main(){
    samochod garaz[4] = {{"mercedes", "benz", 1998, "czerwony"},
                      {"voltzwagen", "golf", 2002, "granatowy", "ZE MNA PITBUL"},
                      {"mercedes", "A", 2000, "czarny", "NA TYLNYCH SIEDZENIACH"},
                      {"mercedes", "B", 2000, "zielony", "AMOGUS"}};
    for(int i = 0; i<4; i++){
        cout << garaz[i].marka << "\t" << garaz[i].model << "\t" << garaz[i].rok << "\t" << garaz[i].kolor << "\t" << garaz[i].SZYBY << endl;
    }
    return 0;
}