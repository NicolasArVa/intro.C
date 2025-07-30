#include <stdio.h>

int main () {
    int day1, month1, year1;
    int day2, month2, year2;

    printf("Por favor introduce la primera fecha: ");
    scanf("%d %d %d", &day1, &month1, &year1);

    printf("Por favor introduce la segunda fecha: ");
    scanf("%d %d %d", &day2, &month2, &year2);

    if (year1 < year2) {
        printf("la fecha %d/%d/%d es anterior a la fecha %d/%d/%d.\n", day1, month1, year1, day2, month2, year2);
    } else if (year1 > year2) {
        printf("la fecha %d/%d/%d es anterior a la fecha %d/%d/%d.\n", day2, month2, year2, day1, month1, year1);
    } else {
        if (month1 < month2) {
            printf("la fecha %d/%d/%d es anterior a la fecha %d/%d/%d.\n", day1, month1, year1, day2, month2, year2);
        } else if (month1 > month2) {
            printf("la fecha %d/%d/%d es anterior a la fecha %d/%d/%d.\n", day2, month2, year2, day1, month1, year1);
        } else {
            if (day1 < day2) {
                printf("la fecha %d/%d/%d es anterior a la fecha %d/%d/%d.\n", day1, month1, year1, day2, month2, year2);
            } else if (day1 > day2) {
                printf("la fecha %d/%d/%d es anterior a la fecha %d/%d/%d.\n", day2, month2, year2, day1, month1, year1);
            } else {
                printf("Las dos fechas son iguales.\n");
            }
        }
    }
    
    return 0;
}