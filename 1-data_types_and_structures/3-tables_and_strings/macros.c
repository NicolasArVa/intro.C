#include <stdio.h>

#define PIES_POR_CM 0.03;

int main() {
    int ancho, largo;
    double ancho_p, largo_p;

    printf("Introduce the width: ");
    scanf("%d", &ancho);
    ancho_p = ancho * PIES_POR_CM;

    printf("Introduce the height: ");
    scanf("%d", &largo);
    largo_p = largo * PIES_POR_CM;

    printf("%d x %d cm are %.2lf x %.2lf feet. \n", ancho, largo, ancho_p, largo_p);

    return 0;
}