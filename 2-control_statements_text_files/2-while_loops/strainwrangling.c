#include <stdio.h>
#include <string.h>

#define DIM 64

int main () {
    char minus, mayus, string[DIM], gnirts[DIM];
    int i=0, len;

    printf("Introduce un string en minúsculas: ");
    gets(string);
    len = strlen(string);
    printf("%d\n", len);
    printf("Introduce una letra en minusculas: ");
    do {
        scanf("%c", &minus);
        getchar();
        if (minus<97 || minus>122) {
            printf("Error, el carácter tiene que estar comprendido entre a y z. Vuelve a intentarlo: ");
        }
    } while (minus<97 || minus>122);

    printf("Introduce una letra en mayusculas: ");
    do {
        scanf("%c", &mayus);
        getchar();
        if (mayus<65 || mayus>90) {
            printf("Error, el carácter tiene que estar comprendido entre A y Z. Vuelve a intentarlo: ");
        }
    } while (mayus<65 || mayus>90);
    
    while (i<strlen(string)) {
        if (minus==string[i]) {
            string[i] = mayus;
        }
        i++;
    }

    i=0;
    while (i<len) {
        gnirts[i] = string[len-1-i];
        i++;
    }
    gnirts[len] = '\0';

    printf("%s\n%s\n", string, gnirts);

    return 0;
}