#include <stdio.h>
#define TAM 10000

typedef struct {
    int datos[TAM];
    int ocupadas;
} Tabla;

void initializer (Tabla *t) {
    t->ocupadas = 0;
}

double mediaTabla (Tabla *t) {
    int i, suma;
    for (i=suma=0; i<t->ocupadas; i++) {
        suma += t->datos[i];
    }
    return (double)suma/t->ocupadas;
}

int main () {
    Tabla x;
    int i, numero;
    double mean;

    initializer(&x);

    do {
        printf("Cuántos valores vas a leer entre 1 y %d?: ", TAM);
        scanf("%d", &numero);

        if (numero<1 || numero>TAM) {
            printf("Error, tienes que introducir un numero del 1 y %d.\n", TAM);
        }
    } while (numero<1 || numero>TAM);

    for (i=0; i<numero; i++) {
        printf("Introduce el dato %d: ", i);
        scanf("%d", &x.datos[i]);
        x.ocupadas++;
    }

    mean = mediaTabla(&x);
    printf("La media de los datos leidos es %.2lf.\n", mean);

    return 0;
}