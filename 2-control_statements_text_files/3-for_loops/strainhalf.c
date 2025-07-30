#include <stdio.h>
#include <string.h>

#define DIM 64

int main () {
    char string[DIM];
    int length, middle;

    printf("Introduce una cadena de texto: ");
    scanf("%s", string);

    length = strlen(string);
    if (length%2==0) {
        middle = length/2;
    } else {
        middle = (length+1)/2;
    }

    printf("La cadena %s tiene %d carácteres de longitud y la mitad es la posición %d.\n", string, length, middle);

    return 0;
}