#include <stdio.h>

typedef struct {
    int day;
    int month;
    int year;
} Fecha;

void increaseDate (Fecha *date) {
    
    if (date->day<30) {
        date->day++;
    } else {
        date->day = 1;
        if (date->month<12) {
            date->month++;
        } else {
            date->month = 1;
            date->year++;
        }
    }
}

int main () {
    Fecha date;

    do {
        printf("Ingrese un día: ");
        scanf("%d", &date.day);

        if (date.day<1 || date.day>30) {
            printf("Error, ingresar un dia entre 1 y 30.\n");
        }
    } while (date.day<1 || date.day>30);

    do {
        printf("Ingrese un mes: ");
        scanf("%d", &date.month);

        if (date.month<1 || date.month>12) {
            printf("Error, ingresar un mes entre 1 y 12.\n");
        }
    } while (date.month<1 || date.month>12);

    printf("Ingrese un año: ");
    scanf("%d", &date.year);

    increaseDate(&date);

    printf("El día siguiente al introducido es: %d/%d/%d.\n", date.day, date.month, date.year);

    return 0;
}