#include <stdio.h>

int main() {
    double total;
    double precio1, tiempo1;
    double precio2, tiempo2;
    double precio3, tiempo3;
    double precio4, tiempo4;
    double precio5, tiempo5;
    
    
    printf("Think of the last 5 games you have played...\nEnter the price of game 1: ");
    scanf("%lf", &precio1);
    printf("and the time you have played it: ");
    scanf("%lf", &tiempo1);
    
    printf("Enter the price of game 2: ");
    scanf("%lf", &precio2);
    printf("and the time you have played it: ");
    scanf("%lf", &tiempo2);
    
    printf("Enter the price of game 3: ");
    scanf("%lf", &precio3);
    printf("and the time you have played it: ");
    scanf("%lf", &tiempo3);
    
    printf("Enter the price of game 4: ");
    scanf("%lf", &precio4);
    printf("and the time you have played it: ");
    scanf("%lf", &tiempo4);
    
    printf("Enter the price of game 5: ");
    scanf("%lf", &precio5);
    printf("and the time you have played it: ");
    scanf("%lf", &tiempo5);
    
    total = ((precio1/tiempo1) + (precio2/tiempo2) + (precio3/tiempo3) + (precio4/tiempo4) + (precio5/tiempo5))/5;
    
    printf("You have invested %lf euros per hour in the last 5 games!.\n", total);
    
    return 0;
}