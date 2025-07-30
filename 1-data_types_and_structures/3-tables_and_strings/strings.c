#include <stdio.h>
#define DIM 8

int main () {
    char nombre[DIM];

    printf("Introduce tu nombre: ");
    scanf("%s", nombre); // strings no requieren & antes del nombre de la variable
    printf("Hola, %s.\n", nombre);

    return 0;
}