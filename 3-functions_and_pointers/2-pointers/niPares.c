#include <stdio.h>

void niParesniNones (int *x, int *y) {
    if (((*x)%2==0 && (*y)%2==0) || ((*x)%2!=0 && (*y)%2!=0)) {
        (*y)++;
    }
}

int main () {
    int x, y;

    printf("Introduce un numero entero: ");
    scanf("%d", &x);
    printf("Introduce otro numero entero: ");
    scanf("%d", &y);

    niParesniNones(&x, &y);

    printf("Los numeros tras llamar la función son: %d y %d.\n", x, y);
    
    return 0;
}