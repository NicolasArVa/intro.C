#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

/* function prototypes */
void printDate(struct date);
void readDate(struct date *);
struct date advanceDay(struct date); 

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

/* add your function definitions here */

void readDate(struct date *dateArg) {
    int flag;

    do {
        //printf("Enter a date (year month day): ");
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
    printf("%02d/%02d/%04d\n", dateArg.month, dateArg.day, dateArg.year);
}

struct date advanceDay(struct date dateArg) {
    struct date advancedDate;

    if (dateArg.day<31) {
        if (dateArg.day==28 && dateArg.month==2) {
            advancedDate.day = 1;
            advancedDate.month = 3;
            advancedDate.year = dateArg.year;
        }else if (dateArg.day==30 && (dateArg.month==4 || dateArg.month==6 || dateArg.month==9 || dateArg.month==11)) {
            advancedDate.day = 1;
            advancedDate.month = dateArg.month + 1;
            advancedDate.year = dateArg.year;
        } else {            
            advancedDate.day = dateArg.day + 1;
            advancedDate.month = dateArg.month;
            advancedDate.year = dateArg.year;
        }
    } else if (dateArg.month==12) {
            advancedDate.day = 1;
            advancedDate.month = 1;
            advancedDate.year = dateArg.year + 1;
    } else {
        advancedDate.day = 1;
        advancedDate.month = dateArg.month + 1;
        advancedDate.year = dateArg.year;
    }

    return advancedDate;
}