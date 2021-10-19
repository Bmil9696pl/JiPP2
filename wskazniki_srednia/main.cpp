#include "iostream"
using namespace std;

float srednia(int* a, int* b){
    return (*a + *b)/2;
}

int main(){
    int a, b;
    int* pa;
    int* pb;
    cout << "wpisz a i b" << endl;
    cin >> a;
    cin >> b;
    pa = &a;
    pb = &b;
    cout << srednia(pa, pb) << endl;
    return 0;
}