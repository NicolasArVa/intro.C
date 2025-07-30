#include <stdio.h>
#define TAM 32

int main () {
    FILE *f, *fSalida;
    int i;
    char dni[TAM], calificacion[TAM];
    double nota, media;

    f = fopen("cualitativo.csv", "r");
    if (f==NULL) {
        printf("Error al abrir el archivo.");
        fclose(f);
        return 1;
    }

    for(i=0, media=0.0; fscanf(f, "%s %lf %s", dni, &nota, calificacion)==3; i++) {
        media += nota;
    }
    media /= i;
    fclose(f);

    f = fopen("cualitativo.csv", "a");
    if (f==NULL) {
        printf("Error al abrir el archivo.");
        fclose(f);
        return 1;
    }

    fprintf(f, "- %lf ", media);
    if (media<5) {
            fprintf(f, "Suspenso\n");
        } else if (media<7) {
            fprintf(f, "Aprobado\n");
        } else if (media<9) {
            fprintf(f, "Notable\n");
        } else if (media<10) {
            fprintf(f, "Sobresaliente\n");
        } else {
            fprintf(f, "Matricula_de_honor\n");
        }
    fclose(f);

    return 0;
}