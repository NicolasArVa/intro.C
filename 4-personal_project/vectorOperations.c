#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include "vectorOperations.h"

double dotProduct(double *v1, double *v2, int dim) {
    double n = 0;

    for (int i=0; i<dim; i++) {
        n += v1[i]*v2[i];
    }
    return n;
}

double norm(double *v, int dim) {
    double n = 0;

    n = dotProduct(v, v, dim);
    n = sqrt(n);

    return n;
}

double cosineProduct(double *v1, double *v2, int dim) {
    double n;

    n = dotProduct(v1, v2, dim)/(norm(v1, dim)*norm(v2, dim));
    return n;
}

double *vectorSum(double *v1, double *v2, int dim) {
    double *vector = (double *) malloc(dim*sizeof(double));
    if (vector==NULL) {
        printf("Memory allocation error.\n");
        return NULL;
    }

    for (int i=0; i<dim; i++) {
        vector[i] = v1[i] + v2[i];
    }

    return vector;
}

