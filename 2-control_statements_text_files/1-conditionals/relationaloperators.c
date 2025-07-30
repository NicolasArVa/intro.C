#include <stdio.h>

int main () {
    int x=3;

    printf("Recuerda: la operacion devuelve 1 si se cumple (true) o 0 si no se cumple (false).\n");

    printf("El resultado de evaluar x<2  es: %d\n", x<2);
    printf("El resultado de evaluar x>=2 es: %d\n", x>=2);
    printf("El resultado de evaluar x==2 es: %d\n", x==2);
    printf("El resultado de evaluar x!=2 es: %d\n", x!=2);
    printf("\n");

    printf("El resultado de evaluar 6==5 es: %d\n", 6==5);
    printf("El resultado de evaluar 5.2==5 es: %d\n", 5.2==5);
    printf("El resultado de evaluar ((int)5.2)==5 es: %d\n", ((int)5.2)==5);
    printf("El resultado de evaluar 12>=12 es: %d\n", 12>=12);
    printf("El resultado de evaluar 'c' != 'C' es: %d\n", 'c' != 'C');
    printf("El resultado de evaluar 'C' == 67 es: %d\n", 'C' == 67);

    return 0;
}