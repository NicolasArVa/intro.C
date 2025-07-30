#include <stdio.h>
#include <string.h>
#define DIM 16

int main () {
    char month[DIM];
    char year[12][DIM] = {"enero", "febrero", "marzo", "abril", "mayo", "junio", "julio", "agosto", "septiembre", "octubre", "noviembre", "diciembre"};

    printf("%s\n", year[0]);
    printf("Introcude el nombre de un mes en minusculas: ");
    gets(month);

    if (strcmp(month, year[0])==0 || 
        strcmp(month, year[2])==0 || 
        strcmp(month, year[4])==0 || 
        strcmp(month, year[6])==0 || 
        strcmp(month, year[7])==0 || 
        strcmp(month, year[9])==0 || 
        strcmp(month, year[11])==0) {

        printf("%s tiene 31 días.\n", month);

    } else if (strcmp(month, year[3])==0 || 
        strcmp(month, year[5])==0 || 
        strcmp(month, year[8])==0 || 
        strcmp(month, year[10])==0) {

        printf("%s tiene 30 días.\n", month);

    } else if (strcmp(month, year[1])==0) {

        printf("%s tiene 28/29 días\n", month);

    } else {

        printf("Mes inválido.\n");

    }

    return 0;
}