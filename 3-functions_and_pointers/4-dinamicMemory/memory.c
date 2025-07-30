#include <stdio.h>
#include "memoryRequired.h"

int main () {
    int i, n, number, flag1, flag2, flag3, memory = 0;
    char type;

    do {
        printf("Introduce nuber of tracking codes: ");
        flag1 = scanf("%d", &n);
        
    } while (!flag1);

    for (i=0; i<n; i++) {
        do {
            printf("Enter the length and type (i, d, c) of the code: ");
            flag2 = scanf("%d %c", &number, &type);
            getchar();
        } while (!flag2 || (type!='i' && type!='d' && type!='c'));

        memoryRequired(number, type, &memory);        
    }

    printf("The amount of memory required is %d\n", memory);

    return 0;
}