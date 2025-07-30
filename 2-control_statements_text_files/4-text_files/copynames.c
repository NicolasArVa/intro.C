#include <stdio.h>
#define DIM 16

int main () {
    FILE *f;
    char file[DIM], name[DIM], letra;
    int n1, n2, count;

    printf("Ingresa el nombre del archivo por analizar: ");
    scanf("%s", file);
    do {
        printf("Ingresa una letra de la a a la z: ");
        scanf("%c", &letra);
    } while (letra<65 || (letra>90 && letra<97) || (letra>122));

    f = fopen(file, "r");
    if (f==NULL){
        printf("Error al abrir el archivo.\n");
        fclose(f);
        return 1;
    }
    while (fscanf(f, "%s %d %d", name, &n1, &n2)==3) {
        if (name[0]==letra || name[0]==(letra+32) || name[0]==(letra-32)) {
            count++;
        }
    }
    fclose(f);

    f = fopen(file, "a");
    if (f==NULL) {
        printf("Error al abrir el archivo.\n");
        fclose(f);
        return 1;
    }

    fprintf(f, "Hay %d nombres que comienzan con la letra %c.\n", count, letra);
    fclose(f);

    return 0;
}