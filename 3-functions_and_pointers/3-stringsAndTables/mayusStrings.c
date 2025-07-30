#include <stdio.h>
#include <string.h>
#define DIM 64

int strSize (char *string) {
    int count;

    for (count=0; (*string)!='\0'; string++) {
        count++;
    }
    return count;
}

void toMayus(char *string) {
    for (; (*string)!=0; string++) {
        *string += 'A'-'a'; 
    }
}

int main () {
    char string[DIM];
    
    printf("Introduce una cadena de carácretes en minúsculas: ");
    scanf("%s", string);

    toMayus(string);
    printf("La cadena en mayúsculas es %s y su tamaño es %d\n", string, strSize(string));

    return 0;
}