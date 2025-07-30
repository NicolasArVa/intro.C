#include <stdio.h>
#define MAX 10

int main () {
    int i=0, suma=0, total, tabla[MAX];

    do {
        printf("¿Cuántos numeros quieres sumar (entre 0 y %d)?: ", MAX);
        scanf("%d", &total);
        if (total<0 || total>MAX) {
            printf("Error. Debes introducir un número entre 0 y %d\n", MAX);
        }
    } while (total<0 || total>MAX);

    while (i<total) {
        printf("Introduce un número: ");
        scanf("%d", &tabla[i]);
        suma += tabla[i];
        i++;
    }

    printf("La suma de los %d números:\n", total);

    i=0;
    while (i<total) {
        printf("%d\n", tabla[i]);
        i++;
    }

    printf("es %d.\n", suma);

    return 0;
}