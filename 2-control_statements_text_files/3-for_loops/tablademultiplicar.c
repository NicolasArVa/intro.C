#include <stdio.h>
#define DIM 10

int main () {
    int i, j;

    for (i=1; i<DIM; i++) {
        printf("La tabla del %d es:\n", i);
        for (j=1; j<=i; j++) {
            printf("%d por %d es %d\n", i, j, i*j);
        }
    }
    return 0;
}