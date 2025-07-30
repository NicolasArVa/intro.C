#include <stdio.h>
#define DIM 128

int main () {
    int i, decimal, binary[DIM];

    do {
        printf("Introduce un número entero positivo: ");
        scanf("%d", &decimal);
    } while (decimal<0);

    for (i=0; decimal>0; i++) {
        if (decimal%2==0) {
            binary[i] = 0;
        } else {
            binary[i] = 1;
            decimal--;
        }
        decimal /= 2;
    }

    printf("El número convertido a binario es: ");
    for (i--; i>=0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}