#include <stdio.h>

void area (double a, double b) {
    double m;

    m = (a*b)/2;
    printf("El area de un triángulo de base %.2lf y altura b %.2lf es %.2lf\n", a, b, m);

    return;
}

int main () {
    double x, y;

    printf("Introduce la base del triángulo: ");
    scanf("%lf", &x);
    printf("Introduce la altura del triángulo: ");
    scanf("%lf", &y);
    
    area(x, y);

    return 0;
}