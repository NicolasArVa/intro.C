#include <stdio.h>

void estadistica (int x, int y, double *media, double *sd) {
    *media = (x+y)/2;
    *sd = ((x-*media)*(x-*media)+(y-*media)*(y-*media))/2;
}

int main () {
    int x, y;
    double m, sd;

    printf("Introduce un entero: ");
    scanf("%d", &x);
    printf("Introduce otro entero: ");
    scanf("%d", &y);

    estadistica(x, y, &m, &sd);
    printf("media = %.2lf\nvarianza = %.2lf\n", m, sd);
    
    return 0;
}