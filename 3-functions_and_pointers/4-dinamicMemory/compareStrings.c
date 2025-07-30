#include <stdio.h>
#include <stdlib.h>

void characterCompare(char *str1, char *str2) {
    int i, j;
    int flag;

    for (i=0; str1[i]!=0; i++) {
        flag = 1;
        for (j=0; str2[j]!=0; j++) {
            if (str1[i]==str2[j]) {
                printf("El carácter %c aparece en la cadena %s.\n", str1[i], str2);
                flag = 0;
                break;
            }
        }
        if (flag) {
            printf("El carácter %c NO aparece en la cadena %s.\n", str1[i], str2);
        }
    }
}

int main () {
    char *string1, *string2;
    int size;

    printf("Introduce la maxima cantidad de carácteres por cadena: ");
    scanf("%d", &size);

    string1 = (char *)malloc(size*sizeof(char));
    if (string1==NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }
    string2 = (char *)malloc(size*sizeof(char));
    if (string2==NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }

    printf("Introduce una cadena: ");
    scanf("%s", string1);

    printf("Introduce otra cadena: ");
    scanf("%s", string2);

    characterCompare(string1, string2);

    free(string1);
    free(string2);
    return 0;
}