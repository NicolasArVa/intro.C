 #include <stdio.h>
#include <stdlib.h>

int main () {
    int i, j, n, m;
    int **matrix;

    printf("Introduce el numero de filas de la matriz: ");
    scanf("%d", &n);
    printf("Introduce el numero de columnas de la matriz: ");
    scanf("%d", &m);

    matrix = (int**)malloc(n*sizeof(int*));
    if (matrix==NULL) {
        printf("La reserva de memoria ha fallado\n");
        return 1;
    }
    
    for (i=0; i<n; i++) {
        matrix[i] = (int*)malloc(m*sizeof(int));
        if (matrix[i]==NULL) {
            for (j=0; j<i; j++) {
                free(matrix[j]);
            }
            free(matrix);
            printf("La reserva de memoria ha fallado\n");
            return 1;
        }
    }

    // data collecting code

    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            printf("Introduce el valor de la fila %d y la columna %d: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Matriz:\n");
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (i=0; i<n; i++){
        free(matrix[i]);
    }
    free(matrix);
    return 0;
}