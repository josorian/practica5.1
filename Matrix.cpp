//
// Created by josorian on 19/04/2023.
//

#include "Matrix.h"

double **zeros(int rows, int cols) {
    double** matrix = new double *[rows]; //crea un puntero que apunte a un arreglo de punteros

    // crea una matriz de tamaño rows x cols
    for (int i = 0; i < rows; i++) {
        matrix[i] = new double [cols];
    }
    // libera la memoria
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

}
