#include "memoria.h"
#include <stdio.h>
#include <stdlib.h>

double **mallocMatrixDouble(int m, int n) {
    int i, j;
    double **matrix;

    matrix = (double **)malloc(m*sizeof(double*));
    if (matrix==NULL) {
        return NULL;
    }

    for (i=0; i<m; i++) {
        matrix[i] = (double *)malloc(n*sizeof(double));
        if (matrix[i]==NULL) {
            freeMatrixDouble(matrix, i);
            return NULL;
        }
    }
    return matrix;
}

void freeMatrixDouble (double **matrix, int m) {
    int i;

    for (i=0; i<m; i++) {
        free(matrix[i]);
    }
    free(matrix);
}