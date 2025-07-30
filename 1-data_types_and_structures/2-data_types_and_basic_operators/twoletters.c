#include <stdio.h>

int main() {
    char c1, c2;
    
    printf("Inttroduce a letter: ");
    scanf("%c", &c1);
    printf("Introduce another letter: ");
    scanf(" %c", &c2);

    printf("You have introduced the letters %c and %c.", c1, c2);

    return 0;
}