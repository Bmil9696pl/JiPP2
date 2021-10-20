#include <iostream>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int* arr, int n) {
    int i, j;
    for (i = 0; i < n - 1; i++)

        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

int main() {
    int *arr;
    int size;
    cout << "Podaj rozmiar tablicy" << endl;
    cin >> size;
    arr = new int[size]();
    srand(time(NULL));
    for (int i = 0; i < size; i++){
        arr[i] = (rand() % 100) + 1;
    }
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    bubbleSort(arr, size);
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;
    return 0;
}