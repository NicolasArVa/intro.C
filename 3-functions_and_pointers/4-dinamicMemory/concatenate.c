#include <stdio.h> 
#include <stdlib.h>

int characterCount (char *string) {
    int count;
    
    for (count=0; *string!='\0'; string++) {
        count++;
    }
    return count;
}

void concatenate (char *string1, char *string2, char *string3) {
    int i, m, n;

    n = characterCount(string1);
    m = characterCount(string2);

    for (i=0; i<n; i++) {
        string3[i] = string1[i];
    }
    for (i=0; i<m; i++) {
        string3[n+i] = string2[i];
    }
    string3[m+n] = '\0';
}

int main () {
    char *string1, *string2, *string3;
    int numero;

    printf("Introduce el numero maximo de la cadena: ");
    scanf("%d", &numero);

    string1 = (char *)malloc(numero*sizeof(char));
    if (string1==NULL) {
        printf("Error no se pudo reservar memoria.\n");
    }
    string2 = (char *)malloc(numero*sizeof(char));
    if (string2==NULL) {
        printf("Error no se pudo reservar memoria.\n");
    }
    string3 = (char *)malloc(numero*2*sizeof(char));
    if (string3==NULL) {
        printf("Error no se pudo reservar memoria.\n");
    }

    printf("Introduce una cadena: ");
    scanf("%s", string1);
    printf("Introduce otra cadena: ");
    scanf("%s", string2);

    concatenate(string1, string2, string3);
    printf("Cadena concatenada: %s\n", string3);

    free(string1);
    free(string2);
    free(string3);
    return 0;
}