#include <stdio.h>
#include <math.h>

int esPrimo(int n) {
    int i;

    for (i=2; i<sqrt(n); i++) {
        if (n%i==0) {
            return 0;
        }
    }

    return 1;
}

int main () {
    int numero;

    printf("Introduce un numero: ");
    scanf("%d", &numero);

    if (esPrimo(numero)) {
        printf("%d es primo", numero);
    } else {
        printf("%d no es primo", numero);
    }

    return 0;
}