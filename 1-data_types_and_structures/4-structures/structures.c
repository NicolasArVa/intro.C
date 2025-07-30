#include <stdio.h>
#define MAX_STR 128

typedef struct {
    char author[MAX_STR];
    char title[MAX_STR];
    int year;
} Libro;

int main () {
    Libro novela = {"Mario Vargas Llosa", "El héroe discreto", };
    printf("Introduce a year: ");
    scanf("%d", &novela.year);

    printf("%s fue escrito por %s en el año %d.\n", novela.title, novela.author, novela.year);
    return 0;
}
