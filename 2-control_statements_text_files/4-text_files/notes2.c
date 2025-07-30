#include <stdio.h>
#define TAM 16

int main () {
    FILE *fEntrada, *fSalida;
    char entrada[TAM] = "notas.txt", salida[TAM] = "cualitativo.csv", dni[TAM];
    int modelo, aciertos, fallos, blancos;
    double nota;

    if((fEntrada = fopen(entrada, "r"))==NULL) {
        printf("Erro al abrir el archivo %s\n", entrada);
        fclose(fEntrada);
        return 1;
    }

    if ((fSalida = fopen(salida, "w"))==NULL) {
        printf("Error al abrir el archivo %s\n", salida);
        fclose(fSalida);
        return 1;
    }

    while (fscanf(fEntrada, "%s %d %d %d %d %lf", dni, &modelo, &aciertos, &fallos, &blancos, &nota)==6) {
        fprintf(fSalida, "%s %lf ", dni, nota);
        if (nota<5) {
            fprintf(fSalida, "Suspenso\n");
        } else if (nota<7) {
            fprintf(fSalida, "Aprobado\n");
        } else if (nota<9) {
            fprintf(fSalida, "Notable\n");
        } else if (nota<10) {
            fprintf(fSalida, "Sobresaliente\n");
        } else {
            fprintf(fSalida, "Matricula_de_honor\n");
        }
    }

    fclose(fEntrada);
    fclose(fSalida);

    return 0;
}