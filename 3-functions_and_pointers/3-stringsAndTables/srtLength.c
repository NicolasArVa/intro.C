#include <stdio.h>
#define TAM 64

int main () {
    char string[TAM];
    char *p;
    int count=0;

    printf("Introduzca una cadena de carácteres: ");
    scanf("%s", string);

    p = &string[0];

    while ((*p)!='\0') {
        count++;
        p++;
    }

    printf("%s tiene %d carácteres.\n", string, count);

    return 0;
}