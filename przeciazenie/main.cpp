//
// Created by bartek on 19.10.2021.
//

#include "iostream"
using namespace std;

int pole(int a){
    return a*a;
}

int pole(int a, int h){
    return (a*h)/2;
}

int main(){
    int a = 2;
    int h = 2;
    cout << pole(a) << endl;
    cout << pole(a, h) << endl;
    return 0;
}