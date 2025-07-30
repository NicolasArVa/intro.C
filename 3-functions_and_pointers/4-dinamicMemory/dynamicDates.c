#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int day;
    int month;
    int year;
} Fecha;

Fecha *olderDate (Fecha *date, int size) {
    Fecha *older = &date[0];
    int i;
    
    for (i=1; i<size; i++) {
        if (date[i].year<older->year) {
            older = &date[i];
        } else if (date[i].year==older->year) {
            if (date[i].month<older->month) {
                older = &date[i];
            } else if (date[i].month==older->month) {
                if (date[i].day<older->day) {
                    older = &date[i];
                }
            }
        }
    }

    return older;
}

int main () {
    Fecha *date, *p;
    int n, i;

    printf("Introduce el número de fechas a guardar: ");
    scanf("%d", &n);

    date = (Fecha *)malloc(n*sizeof(Fecha));
    if (date==NULL) {
        printf("Error: no se pudo asignar memoria.\n");
        return 1;
    }

    for (i=0; i<n; i++) {
        printf("Introduce el día de la fecha %d: ", i+1);
        scanf("%d", &date[i].day);
        printf("Introduce el mes de la fecha %d: ", i+1);
        scanf("%d", &date[i].month);
        printf("Introduce el año de la fecha %d: ", i+1);
        scanf("%d", &date[i].year);
    }

    p = olderDate(date, n);
    printf("La fecha más antigua es: %d/%d/%d\n", p->day, p->month, p->year);

    free(date);
    return 0;
}