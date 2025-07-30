#include <stdio.h>
#define TAM 3

double mean(int *tabla, int size) {
    int i;
    double m;

    for (i=0; i<size; i++, tabla ++) {
        m += (*tabla);
    }

    return m/size;
}

int main () {
    int datos[TAM] = {2, 3, 5};

    printf("La media es %.2lf\n", mean(datos, TAM));

    return 0;
}