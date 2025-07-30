#include <stdio.h>
#include "memoryRequired.h"
#define DIM 3
#define LEN 4

int main () {
    int i, number, flag, memory = 0;
    int bytes[DIM] = {0, 0, 0};
    char units[DIM][LEN] = {"B", "KB", "MB"};
    char type;

    do {
        printf("Introduce type and number of variables to store: ");
        flag = scanf("%c %d", &type, &number);
        getchar();
        if (type!='i' && type!='d'&& type!='s') {
            printf("Error: invalid data type\n");
        }
    } while (!flag || (type!='i' && type!='d' && type!='s'));

    memoryRequired(number, type, &memory);

    for (i=0; i<DIM; i++) {
        bytes[i] = memory%1000;
        memory /= 1000;
    }

    if (memory==0) {
        for (i=DIM-1; i>0; i--) {
            if (bytes[i]>0) {
                for (; i>0; i--) {
                    printf("%d %s and ", bytes[i], units[i]);
                }
                break;
            } 
        }
        printf("%d %s\n", bytes[0], units[0]);
    } else {
        printf("Insuficient memory");
    }

    return 0;
}