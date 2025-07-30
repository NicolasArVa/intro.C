#include <stdio.h>
#include <string.h>

#define DIM 64

int main () {
    char word[DIM] = "supercalifragilisticoespialidoso";

    printf("La longitud de la cadena es: %ld\n", strlen(word));

    return 0;
}