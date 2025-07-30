#include <stdio.h>
#define TAM 3
#define DELTA 5

void increaseTable (int *table, int size, int delta) {
    int i, *p;

    p = table;

    for (i=0; i<size; i++, p++) {
        *p += delta;
    }
}

int main () {
    int i, tabla[TAM], *p;

    p = tabla;
    for (i=0; i<TAM; i++, p++) {
        printf("Introduce un numero entero: ");
        scanf("%d", p);        
    }
    
    p = tabla;
    printf("El contenido de la tabla es ");
    for (i=0; i<TAM; i++, p++) {
        printf("%d ", *p);
    }
    printf("\n");

    increaseTable(tabla, TAM, DELTA);

    p = tabla;
    printf("El nuevo contenido de la tabla es ");
    for (i=0; i<TAM; i++, p++) {
        printf("%d ", *p);
    }
    printf("\n");

    return 0;
}