#include <stdio.h>

int main () {
    FILE *f;
    char dni[10];
    int modelo, aciertos, fallos, blancos, count1, count2, i;
    double nota, media1, media2;

    f = fopen("notas.txt", "r");
    if (f==NULL) {
        printf("Error abriendo el archivo\n");
        return 1;
    }

    for (i=0, media1=0.0, media2=0.0, count1=0, count2=0; fscanf(f, "%s %d %d %d %d %lf", dni, &modelo, &aciertos, &fallos, &blancos, &nota) == 6; i++) {
        if (modelo==1) {
            media1 +=nota;
            count1++;
        } else if (modelo==2) {
            media2 +=nota;
            count2++;
        }
    }
    fclose(f);

    printf("La nota media del modelo 1 es %.3lf.\n", media1/count1);
    printf("La nota media del modelo 2 es %.3lf.\n", media2/count2);
    

    return 0;
}