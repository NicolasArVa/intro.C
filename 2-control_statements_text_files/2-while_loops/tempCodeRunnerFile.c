#include <stdio.h>
#define DIM 10

int main () {
    int numero, i=0, tabla[DIM]={2,4,6,8,10,12,14,16,18,20};

    printf("Introduce el número de valores que quieres mostrar en pantalla (1-10): ");
    scanf("%d", &numero);

    do {
        printf("El número introducido no es correcto. Intenta de nuevo: ");
        scanf("%d", &numero);
    } while (numero>10 || numero<1);

    while (i<numero) {
        printf("%d ", tabla[i]);
        i++;
    }
    printf("\n");

    return 0;
}