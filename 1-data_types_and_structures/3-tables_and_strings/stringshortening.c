#include <stdio.h>
#include <string.h>
#define DIM 64

int main () {
    char word[DIM];
    int i;

    printf("Introduce tu palabra: ");
    scanf("%s", word);
    printf("Tu palabra tiene %ld caracteres.\n", strlen(word));
    printf("Introduce un numero menor a dicha longitud: ");
    scanf("%d", &i);
    word[i] = 0;
    printf("La palabra cortada en la letra %d es: %s\n", i, word);

    return 0;
}