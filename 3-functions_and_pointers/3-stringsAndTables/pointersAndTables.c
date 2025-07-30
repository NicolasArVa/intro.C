#include <stdio.h>
#define TAM 3

int main () {
    int datos[TAM] = {5, 7, 9};
    int *p;
    int i;

    for (i=0; i<TAM; i++) {
        printf("datos[%d] = %d\n", i, datos[i]);
    }

    p = &datos[0];
    printf("El valor al que apunta p es %d.\n", *p);

    p++;
    printf("El valor al que apunta p es %d.\n", *p);
    *p = 4;
    printf("El valor al que apunta p es %d.\n", *p);

    p++;
    printf("El valor al que apunta p es %d.\n", *p);
    *p = 6;
    printf("El valor al que apunta p es %d.\n", *p);

    for (i=0; i<TAM; i++) {
        printf("datos[%d] = %d\n", i, datos[i]);
    }

    return 0;
}