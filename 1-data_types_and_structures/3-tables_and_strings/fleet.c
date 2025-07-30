#include <stdio.h>

int main () {
    char table[3][2] = {{'o', 'x'}, {'x', 'x'}, {'x', 'o'}};
    int i, j;

    printf("Introduce una fila: ");
    scanf("%d", &i);

    printf("Introduce una columna: ");
    scanf("%d", &j);

    printf("En la fila %d columna %d encontramos: %c\n", i, j, table[i-1][j-1]);

    printf("Introduce una fila: ");
    scanf("%d", &i);

    printf("Introduce una columna: ");
    scanf("%d", &j);

    printf("En la fila %d columna %d encontramos: %c\n", i, j, table[i-1][j-1]);

    return 0;
}