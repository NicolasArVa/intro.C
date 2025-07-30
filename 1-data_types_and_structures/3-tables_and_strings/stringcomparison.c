#include <stdio.h>
#include <string.h>

#define DIM 128

int main () {
    char string1[DIM], string2[DIM];

    printf("Introduce un string:");
    gets(string1);
    
    strcpy(string2, string1);

    printf("La cadena de caracteres copiada es: %s.\n", string2);
    printf("La comparacion de las cadenas es %d.\n", strcmp(string1, string2));

    return 0;
}