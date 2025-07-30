#include <stdio.h>
#define DIM 5
#define CHAMPS 3

int main () {
    double matrix[CHAMPS][DIM] = {{120,140,160,160,100}, {110,120,180,150,140}, {160,150,180,180,170}};
    double fiora_m, irelia_m, jax_m;

    fiora_m = (matrix[0][0]+matrix[0][1]+matrix[0][2]+matrix[0][3]+matrix[0][5])/5;
    irelia_m = (matrix[1][0]+matrix[1][1]+matrix[1][2]+matrix[1][3]+matrix[1][5])/5;
    jax_m = (matrix[2][0]+matrix[2][1]+matrix[2][2]+matrix[2][3]+matrix[2][5])/5;

    printf("Media experiencia en las ultimas 5 partidas con fiora: %.2lf\n", fiora_m);
    printf("Media experiencia en las ultimas 5 partidas con irelia: %.2lf\n", irelia_m);
    printf("Media experiencia en las ultimas 5 partidas con jax: %.2lf\n", jax_m);

    return 0;
}