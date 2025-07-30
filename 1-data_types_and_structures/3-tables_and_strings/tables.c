#include <stdio.h>

#define DIM 3

int main () {
    char datos_c[DIM];
    short datos_s[DIM+1];
    int datos_i[2+DIM*2];
    long datos_l[3*DIM];
    float datos_f[DIM*4];
    double datos_d[DIM%5];

    return 0;
}