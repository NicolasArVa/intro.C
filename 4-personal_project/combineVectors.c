#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
//#include "vectorOperations.h"

//#define N 5
#define THRESHOLD 0.1
//#define ITERATIONS 3


int **identityMatrix (int size);
void freeMatrix(int **matrix, int size);
void appendRowToMatrix(int ***matrix, int *rows, int dim, int *vector);
void expandBasis(int ***matrix, int dim, int *rows, int levels);
int dotProduct(int *v1, int *v2, int dim);
double norm(int *v, int dim);
double cosineProduct(int *v1, int *v2, int dim);
int *vectorSum(int *v1, int *v2, int dim);
int areVectorsSimilar(int *v1, int *v2, int dim);
int isVectorInMatrix(int **matrix, int size, int *vector, int dim);

int main () {
    int **basis;
    int size, N, iterations;


    do {
        printf("Enter the length of each vector: "); // How many elements each vector will have
        scanf("%d", &N);

        if (N<1) {
            printf("Length must be greater or equal than 1\n");
        }
    } while (N<1);

    do {
        printf("Enter the number of desired combination epochs: "); // how many layers of combinations the vectors will have
        scanf("%d", &iterations);

        if (iterations<1) {
            printf("Number of combination iterations must be greater or equal than 1\n");
        }
    } while (iterations<1);

    basis = identityMatrix(N); // initialize basis with the identity matrix, one vector per "concept"
    size = N; // set initial number of rows in the basis matrix

    expandBasis(&basis, N, &size, iterations); // expand basis matrix by combining vectors with cosine similarity below threshold
    if (basis==NULL) {
        printf("error expanding basis");
        return 1;
    }
    printf("Final number of rows: %d\n", size);
    freeMatrix(basis, size);
    return 0;
}

int **identityMatrix (int size) {
    int **matrix = (int **) malloc(size*sizeof(int *));

    if (matrix==NULL) {
        printf("Memory allocation failed");
        return NULL;
    }

    for (int i=0; i<size; i++) {
        matrix[i] = (int *) malloc(size*sizeof(int));

        if (matrix[i]==NULL) {
            printf("Memory allocation failed");
            // Clean previous rows
            for (int j=0; j<i; j++) {
                free(matrix[j]);
            }
            free(matrix);
            return NULL;
        }
        for (int j=0; j<size; j++) {
            if (j==i){
                matrix[i][j] = 1.;
            } else {
                matrix[i][j] = 0.;
            }
        }
    }

    return matrix;
}

void appendRowToMatrix(int ***matrix, int *rows, int dim, int *vector) {
    int **temp = (int **) realloc((*matrix), (*rows+1)*sizeof(int *));
    if (temp==NULL) {
        printf("Error allocating memory.\n");
        return;
    }
    *matrix = temp;

    (*matrix)[*rows] = (int *) malloc(dim*sizeof(int));
    if ((*matrix)[*rows]==NULL) {
        printf("Error allocating memory.\n");
        return;
    }

    for (int i=0; i<dim; i++) {
        (*matrix)[*rows][i] = vector[i];
    }
    (*rows)++;
}

void expandBasis(int ***matrix, int dim, int *rows, int levels) {
    int prevCount;
    int *addedVector;

    if ((*matrix)==NULL) {
        printf("Error: matrix is NULL\n");
        return;
    }

    FILE *fp = fopen("finalBasis.txt", "w");
    if (fp==NULL) {
        printf("Error opening file\n");
        freeMatrix(*matrix, *rows);
    }
    
    for (int i=0; i<*rows; i++) {
        fprintf(fp, "[ ");
        for (int j=0; j<dim; j++) {
            fprintf(fp, "%d ", (*matrix)[i][j]);
        }
        fprintf(fp, "]\n");  
    } 

    for (int n=0; n<levels; n++) {
        prevCount = *rows;
        printf("Starting iteration %d, current number of rows: %d\n", n, *rows);
        printf("Comparing vectors...\n");
        for (int i=0; i<prevCount; i++) {
            for (int j=i+1; j<prevCount; j++) {

                if (cosineProduct((*matrix)[i], (*matrix)[j], dim)<THRESHOLD) {
                    printf("Adding vectors %d and %d...\n", i, j);
                    addedVector = vectorSum((*matrix)[i], (*matrix)[j], dim);
                    if (addedVector==NULL) {
                        return;
                    }
                    if (isVectorInMatrix(*matrix, *rows, addedVector, dim)==0) {
                        fprintf(fp, "[ ");
                        for (int k=0; k<dim; k++) {
                            fprintf(fp, "%d ", addedVector[k]);
                        }
                        fprintf(fp, "]\n");
                        appendRowToMatrix(matrix, rows, dim, addedVector);

                        if ((*matrix)==NULL) {
                            free(addedVector);
                            return;
                        }
                    }

                    free(addedVector);
                    printf("New row added, total number of rows: %d\n", *rows);
                }
            }
        }
        if (prevCount == *rows) {
            printf("No new vectors added in this iteration, breaking...\n");
            break;
        }
    }
    fclose(fp);

}

void freeMatrix(int **matrix, int size) {
    for (int i=0; i<size; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

int dotProduct(int *v1, int *v2, int dim) {
    int n = 0;

    for (int i=0; i<dim; i++) {
        n += v1[i]*v2[i];
    }
    return n;
}

double norm(int *v, int dim) {
    double n = 0;

    n = (double) dotProduct(v, v, dim);
    n = sqrt(n);

    return n;
}

double cosineProduct(int *v1, int *v2, int dim) {
    double n;

    n = (double) dotProduct(v1, v2, dim);
    n = n/(norm(v1, dim)*norm(v2, dim));
    return n;
}

int *vectorSum(int *v1, int *v2, int dim) {
    int *vector = (int *) malloc(dim*sizeof(int));
    if (vector==NULL) {
        printf("Memory allocation error.\n");
        return NULL;
    }

    for (int i=0; i<dim; i++) {
        vector[i] = v1[i] + v2[i];
    }

    return vector;
}

int areVectorsSimilar(int *v1, int *v2, int dim) {
    for (int i=0; i<dim; i++) {
        if (cosineProduct(v1, v2, dim)<THRESHOLD) {
            return 0;
        }
    }
    return 1;
}

int isVectorInMatrix(int **matrix, int size, int *vector, int dim) {
    for (int i=0; i<size; i++) {
        if (areVectorsSimilar(matrix[i], vector, dim)) {
            return 1;
        }
    }
    return 0;
}