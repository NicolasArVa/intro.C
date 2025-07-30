#include <stdio.h>
#define DIM 10

int main () {
    int numero, i=0, tabla[DIM];
    
    printf("¿Cuántos numeros quieres comparar? elige entre 2 y 10: ");
    do {
        scanf("%d", &numero);
        if (numero<2 || numero>10) {
            printf("El número introducido no es correcto, elige entre 2 y 10: ");
        }
    } while (numero<2 || numero>10);

    while (i<numero) {
        printf("introduce el numero %d de %d: ", i+1, numero);
        scanf("%d", &tabla[i]);
        i++;
    }

    i=0;
    while (i<numero) {
        if (tabla[i]<tabla[numero-1]) {
            printf("El numero %.2lf es menor que el numero %.2lf.\n", (double)tabla[i], (double)tabla[numero-1]);
        }
        i++;
    }
    return 0;
}