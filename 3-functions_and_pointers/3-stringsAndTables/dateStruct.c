#include <stdio.h>

struct date {
    int year;
    int month;
    int day;
};

void readDate(struct date *dateArg) {
    int flag;

    do {
        printf("Enter a date (year month day): ");
        flag = scanf("%d %d %d", &(dateArg->year), &(dateArg->month), &(dateArg->day));
        if (flag!=3) {
            printf("Invalid input, please enter integers only.\n");
        } else if (dateArg->month<1 || dateArg->month>12) {
            printf("Invalid month, please enter a valid one\n");
            flag = 1;
        } else if (dateArg->day<1 || dateArg->day>31) {
            printf("Invalid day, please enter a valid one\n");
            flag = 1;
        }
    } while (flag!=3);
}

void printDate(struct date dateArg) {
    printf("%02d/%02d/%04d\n", dateArg.day, dateArg.month, dateArg.year);
}

int main(void) {
	struct date today;
	readDate(&today);
	printDate(today);
	return 0;
}