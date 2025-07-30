#include <stdio.h>
#define DIM 8

int main () {
    char nombre[DIM] = "Ana Gil";

    printf("Hola, %s.\n", nombre);
    nombre[3] = 'n';
    nombre[5] = 0;
    printf("Hola, %s.\n", nombre);

    return 0;
}