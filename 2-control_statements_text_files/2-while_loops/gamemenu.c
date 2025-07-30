#include <stdio.h>

int main () {
    int opcion;

    printf("Menú:\n1.\tEmpezar partida\n2.\tAjustes\n3.\tAyuda\n4.\tSalir\n");
    printf("Selecciona una opción: ");
    scanf("%d", &opcion);

    while (opcion<1 || opcion>4) {
        printf("Opción inválida. Inténtalo de nuevo:\n");
        scanf("%d", &opcion);
    }
    
    switch (opcion) {
        case 1:
            printf("Has elegido comenzar la partida.\n");
            break;
        case 2:
            printf("Aquí estará el código para mostrar los ajustes del juego.\n");
            break;
        case 3:
            printf("Aquí estará el código para mostrar la ayuda.\n");
            break;
        case 4:
            printf("¡Hasta luego!\n");
            break;
    }
    return 0;
}