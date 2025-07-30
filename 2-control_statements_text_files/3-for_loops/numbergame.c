#include <stdio.h>

int main () {
    int i, pCount=0, tCount=0, sum=0, tabla[10];

    for (i=0; i<10; i++){
        printf("Introduce un número: ");
        scanf("%d", &tabla[i]);
        

        if (tabla[i]>0) {
            tCount++;
            pCount++;
            sum += tabla[i];
        } else if (tabla[i]<0) {
            tCount++;
        } else {
            break;
        }        
    }
    
    if (tCount!=0) {
        printf("Los números tecleados son: ");
        for (i=0; i<tCount; i++) {
            printf("%d ", tabla[i]);
        }
        printf("\n");
        printf("Se ha leído un total de %d números, de los cuales %d eran negativos.\n", tCount, tCount-pCount);
        printf("La suma de los %d valores positivos leídos es: %d\n", pCount, sum);
    } else {
        printf("No se ha introducido ningún número.\n");
    }

    return 0;
}