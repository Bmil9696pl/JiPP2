#include "../lib/lib.h"
#include "iostream"

using namespace std;

void help(){
    cout << "Oto kalkulator macierzy!" << endl;
    cout << "Do wyboru masz nastepujace funkcje:" << endl;
    cout << "addMatrix - doda do siebie dwie macierze" << endl;
    cout << "subtractMatrix - odejmie macierz B od macierzy A" << endl;
    cout << "multiplyMatrix - pomnozy ze soba macierz A i B" << endl;
    cout << "multiplyByScalar - pomnozy macierz A przez podany przez ciebie skalar" << endl;
    cout << "transpozeMatrix - transponuje podana przez ciebie macierz" << endl;
    cout << "powerMatrix - spoteguje macierz A do n-tej potegi" << endl;
    cout << "determinantMatrix - oblicza wyznacznik macierzy A" << endl;
    cout << "matrixIsDiagonal - sprawdza czy macierz jest diagonalna" << endl;
    cout << "sortRowsInMatrix - sortuje wiersze w macierzy w kolejnosci rosnacej" << endl;
}

bool checkCommand(string command) {
    string command_list[9] = {"addMatrix", "subtractMatrix", "multiplyMatrix", "multiplyByScalar",
                              "transpozeMatrix", "powerMatrix", "determinantMatrix",
                              "matrixIsDiagonal", "sortRowsInMatrix"};


    for (int i = 0; i < 9; ++i) {
        if (command == command_list[i])
            return true;
    }

    return false;
}

//int

int **createMatrixInt(int rows, int columns) { //tworzenie macierzy, najpierw wiersze, potem kolumny, a na koncu wypelniane sa zerami
    int **tmp_matrix = new int *[rows];

    for (int i = 0; i < rows; i++) {
        tmp_matrix[i] = new int[columns];

        for (int j = 0; j < columns; ++j) {
            tmp_matrix[i][j] = 0; //wpisanie wartosci 0 do kazdej komorki macierzy
        }
    }

    return tmp_matrix;
}

bool fillMatrix(int **matrix, int rows, int columns) { //wypelniane macierzy wartosciami, program przebiega wzdluz wierszy

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << "Liczba do komorki " << i + 1 << " " << j + 1 << endl;
            if (!(cin >> matrix[i][j])) {
                cout << "Wprowadzono nieprawidlowy znak" << endl;
                return false;
            }
        }
    }

    return true;
}

void printMatrix(int **matrix, int rows, int columns) { //wypisanie macierzy, program przebiega wzdloz wierszy
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << " " << matrix[i][j] << " ";
        }

        cout << "\n";
    }
}

int **addMatrix(int **matrix_a, int **matrix_b, int rows_a, int columns_a) { //dodawanie dwóch macierzy
    int **result_matrix = nullptr;

    result_matrix = createMatrixInt(rows_a, columns_a);

    for (int i = 0; i < rows_a; ++i) {
        for (int j = 0; j < columns_a; ++j) {
            result_matrix[i][j] = matrix_a[i][j] + matrix_b[i][j];
        }
    }

    return result_matrix;
}

int **subtractMatrix(int **matrix_a, int **matrix_b, int rows_a, int columns_a) { //odejmowanie dwóch macierzy
    int **result_matrix = nullptr;

    result_matrix = createMatrixInt(rows_a, columns_a);

    for (int i = 0; i < rows_a; ++i) {
        for (int j = 0; j < columns_a; ++j) {
            result_matrix[i][j] = matrix_a[i][j] - matrix_b[i][j];
        }
    }

    return result_matrix;
}

int **multiplyMatrix(int **matrix_a, int **matrix_b, int rows_a, int columns_a, int columns_b) { //mnozenie dwoch macierzy
    int **result_matrix = nullptr;

    result_matrix = createMatrixInt(rows_a, columns_b);

    for (int i = 0; i < rows_a; ++i) { //[i] - wiersze w macierzy wynikowej i macierzy a
        for (int j = 0; j < columns_b; ++j) { //[j] - kolumny w macierzy wynikowej i macierzy b
            for (int k = 0; k < columns_a; ++k) { //[k] - kolumny w macierzy a i wiersze w macierzy b
                result_matrix[i][j] += matrix_a[i][k] * matrix_b[k][j];
            }
        }
    }

    return result_matrix;
}

int **multiplyByScalar(int **matrix_a, int rows_a, int columns_a, int scalar) { //mnozenie kazdej wartosci w macierzy przez jakas stala
    int **result_matrix = nullptr;

    result_matrix = createMatrixInt(rows_a, columns_a);

    for (int i = 0; i < rows_a; ++i) {
        for (int j = 0; j < columns_a; ++j) {
            result_matrix[i][j] = matrix_a[i][j] * scalar;
        }
    }

    return result_matrix;
}

int **transpozeMatrix(int **matrix, int rows, int columns) { //transponowanie macierzy
    int **result_matrix = nullptr;

    result_matrix = createMatrixInt(columns, rows); //tworzenie macierzy z zamienionymi wielkosciami

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            result_matrix[j][i] = matrix[i][j]; //przepisywanie wartosci do macierzy wynikowej
        }
    }

    return result_matrix;
}

int **powerMatrix(int **matrix, int rows, int columns, int m_power) { //funkcja poteguje macierz, wykorzystujac rekursje oraz wczesniejsza
    if(m_power == 1){                                                 //funkcje do mnozenia dwoch maierzy
        return matrix;
    }
    else if(m_power == 0){
        for(int i = 0; i < rows ; ++i){
            for(int j = 0; i < columns; ++j){
                if(i == j){
                    matrix[i][j] = 1;
                }
                else{
                    matrix[i][j] = 0;
                }
            }
        }
    }
    else
    return multiplyMatrix(matrix, powerMatrix(matrix, rows, columns, m_power - 1), rows, columns, columns);
}

int **submatrix(int **matrix, int row_index, int column_index, int matrix_size) { //funkcja tworzy "podmacierz" (macierz z ktorej usunieto
    int i = 0, j = 0;                                                             //jeden wiersz i kolumne)
                                                                                  //funkcja przyjmuje jako parametry wiersz i kolumny do wykreslenia
    int **result_matrix = nullptr;                                                //oraz rozmiar podmacierzy

    result_matrix = createMatrixInt(matrix_size, matrix_size);

    for (int r = 0; r < matrix_size; ++r) {
        for (int c = 0; c < matrix_size; ++c) {
            if (r != row_index && c != column_index) { //"if" dzieki ktoremu funkcja pomija usuwana kolumne i wiersz
                result_matrix[i][j++] = matrix[r][c];

                if (j == matrix_size - 1) { //"if" dzieki ktoremu przeskakujemy do nastepnego wiersza macierzy
                    j = 0;
                    i++;
                }
            }
        }
    }

    return result_matrix;
}

int determinantMatrix(int **matrix, int rows, int columns) {
    if (rows == 1)      //przypadek elementarny dla macierzy [1][1]
        return matrix[0][0];
    else if (rows == 2)     //przypadek elementarny dla macierzy [2][2]
        return (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
    else {
        int result = 0, sign = 1; //sign - zmiana znaku (+/-)

        int **temp_matrix = nullptr;

        for (int i = 0; i < rows; ++i) {
            temp_matrix = submatrix(matrix, 0, i, rows);

            result += sign * matrix[0][i] * determinantMatrix(temp_matrix, rows - 1, rows - 1);

            sign = -sign;
        }

        return result;
    }
}

bool matrixIsDiagonal(int **matrix, int rows, int columns) { //funckja sprawdza czy wszystkie wartosci poza przekatna wynosza 0
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            if (i != j && matrix[i][j] != 0) {
                return false;
            }
        }
    }

    return true;
}

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void sortRow(int *row, int columns) {   //to jest po prostu bubble sort (kolejnosc rosnaca)
    int i, j;
    for (i = 0; i < columns - 1; i++)
        for (j = 0; j < columns - i - 1; j++)
            if (row[j] > row[j + 1])
                swap(&row[j], &row[j + 1]);
}

void sortRowsInMatrix(int **matrix, int rows, int columns) {    //funkcja wywoluje sortowanie na kazdym wierszu macierzy
    for (int i = 0; i < rows; i++) {
        sortRow(matrix[i], columns);
    }
}

void deleteMatrix(int **matrix, int rows) { //macierz jest tak na prawde tablica tablic, funkcja najpierw wchodzi do tablicy tablic, usuwa
    for (int i = 0; i < rows; ++i) {         //znajdujace sie w niej tablice a ostatecznie usuwa najbardziej zewnetrzna tablice
        delete[] matrix[i];                  //czyli wykonuje swoj proces odwrotnie to funkcji create matrix
    }
    delete[] matrix;
}

//double

double **createMatrixDouble(int rows, int columns) {
    double **tmp_matrix = new double *[columns];

    for (int i = 0; i < rows; i++) {
        tmp_matrix[i] = new double[columns];

        for (int j = 0; j < rows; ++j) {
            tmp_matrix[i][j] = 0;
        }
    }
    return tmp_matrix;
}

bool fillMatrix(double **matrix, int rows, int columns) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << "Liczba do komorki " << i + 1 << " " << j + 1 << endl;
            if (!(cin >> matrix[i][j])) {
                cout << "Wprowadzono nieprawidlowy znak" << endl;
                return false;
            }
        }
    }

    return true;
}

void printMatrix(double **matrix, int rows, int columns) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << " " << matrix[i][j] << " ";
        }

        cout << "\n";
    }
}

double **addMatrix(double **matrix_a, double **matrix_b, int rows_a, int columns_a) {
    double **result_matrix = nullptr;

    result_matrix = createMatrixDouble(rows_a, columns_a);

    for (int i = 0; i < rows_a; ++i) {
        for (int j = 0; j < columns_a; ++j) {
            result_matrix[i][j] = matrix_a[i][j] + matrix_b[i][j];
        }
    }

    return result_matrix;
}

double **subtractMatrix(double **matrix_a, double **matrix_b, int rows_a, int columns_a) {
    double **result_matrix = nullptr;

    result_matrix = createMatrixDouble(rows_a, columns_a);

    for (int i = 0; i < rows_a; ++i) {
        for (int j = 0; j < columns_a; ++j) {
            result_matrix[i][j] = matrix_a[i][j] - matrix_b[i][j];
        }
    }

    return result_matrix;
}

double **multiplyMatrix(double **matrix_a, double **matrix_b, int rows_a, int columns_a, int columns_b) {
    double **result_matrix = nullptr;

    result_matrix = createMatrixDouble(rows_a, columns_b);

    for (int i = 0; i < rows_a; ++i) {
        for (int j = 0; j < columns_b; ++j) {
            for (int k = 0; k < columns_a; ++k) {
                result_matrix[i][j] += matrix_a[i][k] * matrix_b[k][j];

            }
        }
    }

    return result_matrix;
}

double **multiplyByScalar(double **matrix, int rows, int columns, double scalar) {
    double **result_matrix = nullptr;

    result_matrix = createMatrixDouble(rows, columns);

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            result_matrix[i][j] = matrix[i][j] * scalar;
        }
    }

    return result_matrix;
}

double **transpozeMatrix(double **matrix, int rows, int columns) {
    double **result_matrix = nullptr;

    result_matrix = createMatrixDouble(columns, rows);

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            result_matrix[j][i] = matrix[i][j];
        }
    }

    return result_matrix;
}

double **powerMatrix(double **matrix, int rows, int columns, double m_power) {
    if(m_power == 1){
        return matrix;
    }
    else if(m_power == 0){
        for(int i = 0; i < rows ; ++i){
            for(int j = 0; i < columns; ++j){
                if(i == j){
                    matrix[i][j] = 1;
                }
                else{
                    matrix[i][j] = 0;
                }
            }
        }
    }
    else
        return multiplyMatrix(matrix, powerMatrix(matrix, rows, columns, m_power - 1), rows, columns, columns);
}

double **submatrix(double **matrix, int row_index, int column_index, int matrix_size) {
    int i = 0, j = 0;

    double **result_matrix = nullptr;

    result_matrix = createMatrixDouble(matrix_size, matrix_size);

    for (int r = 0; r < matrix_size; ++r) {
        for (int c = 0; c < matrix_size; ++c) {
            if (r != row_index && c != column_index) {
                result_matrix[i][j++] = matrix[r][c];

                if (j == matrix_size - 1) {
                    j = 0;
                    i++;
                }
            }
        }
    }

    return result_matrix;
}

double determinantMatrix(double **matrix, int rows, int columns) {
    if (rows == 1)
        return matrix[0][0];
    else if (rows == 2)
        return (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
    else {
        double result = 0, sign = 1;

        double **temp_matrix = nullptr;

        for (int i = 0; i < rows; ++i) {
            temp_matrix = submatrix(matrix, 0, i, rows);

            result += sign * matrix[0][i] * determinantMatrix(temp_matrix, rows - 1, rows - 1);

            sign = -sign;
        }

        return result;
    }
}

bool matrixIsDiagonal(double **matrix, int rows, int columns) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            if (i != j && matrix[i][j] != 0) {
                return false;
            }
        }
    }

    return true;
}

void swap(double *a, double *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void sortRow(double *row, int columns) {
    int i, j;
    for (i = 0; i < columns - 1; i++)
        for (j = 0; j < columns - i - 1; j++)
            if (row[j] > row[j + 1])
                swap(&row[j], &row[j + 1]);
}

void sortRowsInMatrix(double **matrix, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        sortRow(matrix[i], columns);
    }
}

void deleteMatrix(double **matrix, int rows) {
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
}