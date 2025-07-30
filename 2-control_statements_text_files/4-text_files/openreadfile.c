#include <stdio.h>
#define TAM 16

int main () {
    FILE *fEntrada, *fModelo1, *fModelo2;
    char entrada[TAM]="notas.txt", modelo1[TAM]="modelo1.csv", modelo2[TAM]="modelo2.csv", dni[TAM];
    int modelo, aciertos, fallos, blancos;
    double nota;

    if ((fEntrada = fopen(entrada, "r"))==NULL){
        printf("Error al abrir el archivo %s.", entrada);
        fclose(fEntrada);
        return 1;
    }

    if((fModelo1 = fopen(modelo1, "w"))==NULL) {
        printf("Error al abrir el archivo %s.", modelo1);
        fclose(fModelo1);
        return 1;
    }

    if((fModelo2 = fopen(modelo2, "w"))==NULL) {
        printf("Error al abrir el archivo %s.", modelo2);
        fclose(fModelo2);
        return 1;
    }

    while (fscanf(fEntrada, "%s %d %d %d %d %lf", dni, &modelo, &aciertos, &fallos, &blancos, &nota) == 6) {
        if (modelo==1){
            fprintf(fModelo1, "%s, %lf\n", dni, nota);
        } else {
            fprintf(fModelo2, "%s, %lf\n", dni, nota);
        }
    }

    fclose(fEntrada);
    fclose(fModelo1);
    fclose(fModelo2);

    return 0;
}