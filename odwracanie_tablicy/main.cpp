#include <iostream>
#include "ctime"
using namespace std;

void odwracanie(int arr[], int size){
    int half = size/2;
    int pom;
    for(int i = 0; i<half; i++){
        pom = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = pom;
    }
}

int main(){
    int size;
    int* arr;
    cout << "Jak duza tablice chcesz wygenerowac?" << endl;
    cin >> size;
    arr = new int [size]();
    srand(time(NULL));
    for (int i = 0; i < size ; i++) {
        arr[i] = (rand() % 100) + 1;
    }
    for (int i = 0; i < size ; i++){
        cout << arr[i] << endl;
    }
    odwracanie(arr, size);
    for (int i = 0; i < size ; i++){
        cout << arr[i] << endl;
    }
    delete[] arr;
    return 0;
}