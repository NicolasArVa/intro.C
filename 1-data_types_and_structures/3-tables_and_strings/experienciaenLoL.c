#include <stdio.h>
#define DIM 5
#define MEAN(table) (table[0]+table[1]+table[2]+table[3]+table[4])/5

int main () {
    double fiora[DIM] = {120,140,160,160,100}, irelia[DIM] = {110,120,180,150,140}, jax[DIM] = {160,150,180,180,170};
    double fiora_m, irelia_m, jax_m;

    fiora_m = MEAN(fiora);
    irelia_m = MEAN(irelia);
    jax_m = MEAN(jax);

    printf("Media experiencia en las ultimas 5 partidas con fiora: %.2lf\n", fiora_m);
    printf("Media experiencia en las ultimas 5 partidas con irelia: %.2lf\n", irelia_m);
    printf("Media experiencia en las ultimas 5 partidas con jax: %.2lf\n", jax_m);

    return 0;
}