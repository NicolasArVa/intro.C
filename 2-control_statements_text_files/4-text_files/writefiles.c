#include <stdio.h>
#define NESTUDIANTES 3
#define MAX_DNI 10

typedef struct {
    char dni[MAX_DNI];
    int modelo;
    double nota;
} notaEstudiante; 

int main () {
    FILE *f;
    int i;
    notaEstudiante notas[NESTUDIANTES] = {{"96545675Z",1,4.34},{"96345645D",1,7.2},{"94236532G",2,6.56}};

    f = fopen("wnotas.txt", "r");
    if (f==NULL){
        printf("Error abriendo el archivo.");
        return 1;
    }

    for (i=0; i<NESTUDIANTES; i++) {
        fprintf(f, "%s %d %lf\n", notas[i].dni, notas[i].modelo, notas[i].nota);
    }
    fclose(f);

    return 0;
}