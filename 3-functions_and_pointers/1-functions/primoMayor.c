#include <stdio.h>
#include <math.h>

int esPrimo(int n) {
    int i;
    double root;

    root = (int)sqrt(n);

    for (i=2; i<=root; i++) {
        if (n%i==0) {
            return 0;
        }
    }

    return 1;
}

int primoMayor(int n) {
    int i;

    for (i=n; i>1; i--) {
        if (esPrimo(i)) {
            return i;
        }
    }

    return 0;
}

int main () {
    int numero;

    do {
        printf("Introduce un numero mayor a 1: ");
        scanf("%d", &numero);
    } while (numero<2);

    printf("El mayor primo comprendido entre 2 y %d es %d.\n", numero, primoMayor(numero));

    return 0;
}