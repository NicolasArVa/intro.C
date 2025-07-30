#include <stdio.h>

enum {dolar=1, yen, libra};

int main () {
    int opcion;
    double euros, change;    

    printf("Introduce una cantidad de euros: ");
    scanf("%lf", &euros);
    getchar();
    printf("Selecciona una opción:\n1.\tDólar\n2.\tYen japonés\n3.\tLibra Esterlina\n");
    scanf("%d", &opcion);

    switch (opcion) {
        case dolar:
            change = euros*1.05;
            printf("%.2lf euros son %.2lf dolares\n", euros, change);
            break;
        case yen:
            change = euros*159.93;
            printf("%.2lf euros son %.2lf Yenes\n", euros, change);
            break;
        case libra:
            change = euros*0.82;
            printf("%.2lf euros son %.2lf Libras\n", euros, change);
            break;
        default:
            printf("Opcion incorrecta\n");
    }

    return 0;
}