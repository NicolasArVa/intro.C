#include <stdio.h>
#include <stdlib.h>

void reverseArray (int *, int size);

int main () {
    int number, size, *table;

    printf("Introduce number of elements of the array: ");
    scanf("%d", &size);

    table = (int *)malloc(size*sizeof(int));
    if (table==NULL) {
        printf("Error al asignar memoria\n");
        return 1;
    }

    for (int i=0; i<size; i++) {
        printf("Ingrese elemento #%d: ", i+1);
        scanf("%d", &table[i]);
        getchar();
    }

    printf("La tabla ingresada contiene los numeros: ");
    for (int i=0; i<size; i++) {
        printf("%d ", table[i]);
    }
    printf("\n");

    reverseArray(table, size);

    printf("El reverso de la tabla ingresada es: ");
    for (int i=0; i<size; i++) {
        printf("%d ", table[i]);
    }
    printf("\n");

    free(table);
    return 0;
}

void reverseArray (int *table,int size) {
    int n, aux;

    n = size/2; //round down due to int nature

    for (int i=0; i<=n; i++) {
        aux = table[i]; // save one value in an auxiliary variable
        table[i] = table[size-i-1];
        table[size-i-1] = aux;
    } 
}