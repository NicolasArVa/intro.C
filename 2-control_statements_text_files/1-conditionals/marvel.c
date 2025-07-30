#include <stdio.h>

int main () {
    int opcion;

    printf("Selecciona un número: ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 3:
            printf("Ant-Man\n");
            break;
        default:
            printf("Black Widow\n");
            break;
        case 2:
        case 1:
            printf("Captain America\n");
            break;
        case 4 ... 6:
            printf("Doctor Strange\n");
            break;
    }

    return 0;
}