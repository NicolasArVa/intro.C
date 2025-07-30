#include <stdio.h>

int main () {
    int i, j;
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int b[3][3]={{0,1,2},{4,2,3},{1,4,5}};

    for (i=0; i<3; i++) {
        for (j=0; j<3; j++){
            printf("%d ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }
    return 0;
}