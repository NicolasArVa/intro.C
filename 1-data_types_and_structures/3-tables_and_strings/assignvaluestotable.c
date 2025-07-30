#include <stdio.h>
#define DIM 3

int main () {
    int datos[DIM];

    datos[0] = 5;

    printf("Introduce un número: ");
    scanf("%d", &datos[1]);

    datos[2] = (datos[0]+datos[1])*2;

    printf("El primer elemento de la tabla es %d\n", datos[0]);
    printf("El segundo elemento de la tabla es %d\n", datos[1]);
    printf("El tercer elemento de la tabla es %d\n", datos[2]);

    return 0;
}