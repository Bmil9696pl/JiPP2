#include "iostream"
using namespace std;

void baba(int x, int *w){
    *w = x;
}

int main(){
    int x = 666;
    int y = 555;
    int* w = &y;
    baba(x, w);
    return y;
}