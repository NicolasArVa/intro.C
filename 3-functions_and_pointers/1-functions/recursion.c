#include <stdio.h>

int sumOfDigits (int *number) {
    int n;    

    if (*number==0) {
        return 0;
    } 

    n = *number%10;
    *number  /= 10;

    return n + sumOfDigits(number);
}

int main () {
    int numero, suma;

    printf("Ingresa un numero entero: ");
    scanf("%d", &numero);

    suma = sumOfDigits(&numero);
    printf("La suma de los dígitos es: %d\n", suma);

    return 0;
}