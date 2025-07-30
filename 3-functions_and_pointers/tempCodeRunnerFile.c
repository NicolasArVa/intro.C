#include <stdio.h>
#include <stdlib.h>
#define LEN 40
#define DIM 68

void reverseText (char **array) {
    char *aux;

    for (int i=0, n=DIM/2; i<n; i++) {
        aux = array[i];
        array[i] = array[DIM-1-i];
        array[DIM-1-i] = aux;
    }
}


int main () {
    FILE *f;
    int len, size;
    char **array = (char **)malloc(DIM*sizeof(char *));
    
    if (array==NULL) {
        printf("Error allocating memory.");
        return 1;
    }
    for(int i=0; i<DIM; i++){
        array[i] = (char *)malloc(LEN*sizeof(char));
        if (array[i]==NULL) {
            for(int j=0; j<i; j++) {
                free(array[j]);
            }
            free(array);
            printf("Error allocating memory.");
            return 1;
        }
    }

    f = fopen("text.txt", "r");
    if (f==NULL) {
        printf("Error opening the file\n");
        return 1;
    }
    for(int i=0; i<DIM; i++){
        if (fscanf(f, "%s ", array[i])!=1) {
            break;
        }
    }
    fclose(f);

    reverseText(array);

    f = fopen("reversedText.txt", "a");
    if (f==NULL) {
        printf("Error opening the file\n");
        return 1;
    }

    for(int i=0; i<DIM; i++){
        fprintf(f, "%s ", array[i]);
    }
    fclose(f);

    // Free allocated memory
    for (int i = 0; i < DIM; i++) {
        free(array[i]);
    }
    free(array);
    
    return 0;
}

