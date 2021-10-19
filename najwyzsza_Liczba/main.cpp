#include <iostream>
#include "ctime"
using namespace std;

int main(){
    int size;
    int ok = 0;
    int* arr;
    cout << "Jak duza tablice chcesz wygenerowac?" << endl;
    cin >> size;
    arr = new int [size]();
    srand(time(NULL));
    for (int i = 0; i < size ; i++){
        arr[i] = (rand() % 100) + 1;
    }
    for (int i = 0; i < size ; i++){
        cout << arr[i] << endl;
    }
    for (int i = 0; i < size ; i++){
        if(ok < arr[i]) ok = arr[i];
    }
    delete[] arr;
    return ok;
};
