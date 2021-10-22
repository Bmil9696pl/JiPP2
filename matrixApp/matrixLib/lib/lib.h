//
// Created by bartek on 22.10.2021.
//

#ifndef JIPP2_LIB_H

#define JIPP2_LIB_H
int **create_matrix(int rows, int columns);
void fill_matrix(int **matrix, int rows, int columns);
void print_matrix(int **matrix, int rows, int columns);
int **addMatrix(int **matrix_a, int **matrix_b, int rows_a, int columns_a);
int **subtractMatrix(int **matrix_a, int **matrix_b, int rows_a, int columns_a);
int **multiplyMatrix(int **matrix_a, int **matrix_b, int rows_a, int columns_a, int columns_b);
int **multiplyByScalar(int **matrix, int rows, int columns, int scalar);
int **transpozeMatrix(int **matrix, int rows, int columns);
int **powerMatrix(int **matrix, int rows, int columns, int m_power);
int **submatrix(int **matrix, int row_index, int column_index, int matrix_size);
int determinantMatrix(int **matrix, int rows, int columns);
bool matrixIsDiagonal(int **matrix, int rows, int columns);
void swap(int *a, int *b);
void sortRow(int *arr, int columns);
void sortRowsInMatrix(int **matrix, int rows, int columns);
//double
double **create_matrix(int rows, int columns);
void fill_matrix(double **matrix, int rows, int columns);
void print_matrix(double **matrix, int rows, int columns);
double **addMatrix(double **matrix_a, double **matrix_b, int rows_a, int columns_a);
double **subtractMatrix(double **matrix_a, double **matrix_b, int rows_a, int columns_a);
double **multiplyMatrix(double **matrix_a, double **matrix_b, int rows_a, int columns_a, int columns_b);
double **multiplyByScalar(double **matrix, int rows, int columns, int scalar);
double **transpozeMatrix(double **matrix, int rows, int columns);
double **powerMatrix(double **matrix, int rows, int columns, int m_power);
double **submatrix(double **matrix, int row_index, int column_index, int matrix_size);
double determinantMatrix(double **matrix, int rows, int columns);
bool matrixIsDiagonal(double **matrix, int rows, int columns);
void swap(double *a, double *b);
void sortRow(double *arr, int columns);
void sortRowsInMatrix(double **matrix, int rows, int columns);
#endif //JIPP2_LIB_H
