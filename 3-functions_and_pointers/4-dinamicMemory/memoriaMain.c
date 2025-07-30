#include "memoria.h"
#include <stdio.h>

int main () {
    int i, j, estudiantes, examenes;
    double **notas;

    printf("¿Cuántos estudiantes hay en tu clase?: ");
    scanf("%d", &estudiantes);
    printf("Cuántos exámenes han habido?: ");
    scanf("%d", &examenes);

    notas = mallocMatrixDouble(estudiantes, examenes);
    if (notas==NULL) {
        printf("mallocMatrixDouble() ha fallado al asignar memoria.\n");
        return 1;
    }

    // Codigo para almacenar las notas de cada estudiante

    freeMatrixDouble(notas, examenes);
    
    return 0;
}