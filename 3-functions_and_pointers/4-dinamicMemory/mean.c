#include <stdio.h>
#include <stdlib.h>

double mean (int *table, int size) {
    int i, sum;

    for (i=0, sum=0; i<size; i++) {
        sum += table[i];
    }

    return (double)sum/size;
}

int main () {
    int i, n, *numeros;

    printf("¿Cuántos enteros se van a leer?: ");
    scanf("%d", &n);

    numeros = (int *)malloc(n*sizeof(int));
    if (numeros==NULL) {
        printf("La reserva de memoria ha fallado.\n");
        return 1;
    }

    for (i=0; i<n; i++) {
        printf("Introduce el número %d: ", i+1);
        scanf("%d", &numeros[i]);
    }

    printf("La media de los números leidos es %.2lf\n", mean(numeros, n));
    free(numeros);
    return 0;
}