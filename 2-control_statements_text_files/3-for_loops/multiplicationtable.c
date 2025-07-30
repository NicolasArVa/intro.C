#include <stdio.h>

int main () {
    int i, numero;

    do {
        printf("Introduce un número entre 1 y 9: ");
        scanf("%d", &numero);
    } while (numero<1 || numero>10);

    for (i=1; i<=10; i++) {
        printf("%d por %d es: %d\n", numero, i, numero*i);
    }
}