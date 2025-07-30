#include <stdio.h>
#define SALTOS 15

int main () {
    int numero, respuesta, i=0;

    printf("Ingresa un numero de 0 a 99: ");
    scanf("%d", &numero);

    while (numero<0 || numero>99) {
        printf("Ingresa un numero de 0 a 99: ");
        scanf("%d", &numero);
    }

    while (i<SALTOS){
        printf("\n");
        i++;
    }

    printf("Adivine el numero entre 0 y 99: ");
    scanf("%d", &respuesta);

    while (respuesta!=numero) {
        if (respuesta>numero){
            printf("Demasiado grande. Prueba otra vez: ");
            scanf("%d", &respuesta);
        } else {
            printf("Demasiado pequeño. Prueba otra vez: ");
            scanf("%d", &respuesta);
        }
        
    }

    printf("¡Numero correcto!\n");

    return 0;
}