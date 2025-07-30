#include <stdio.h>

int main () {
    int ancho, largo;
    double ancho_p, largo_p;
    const double pies_por_cm = 0.0328;

    printf("introduce el ancho en cm: ");
    scanf("%d", &ancho);
    ancho_p = ancho*pies_por_cm;

    printf("Introduce el largo en cm: ");
    scanf("%d", &largo);
    largo_p = largo*pies_por_cm;

    printf("%d x %d cm son iguales a %.2lf x %.2lf pies.\n", ancho, largo, ancho_p, largo_p);

    return 0;
}