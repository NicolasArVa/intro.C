#include <stdio.h>

int main(){
    char letter1;
    char cipher1;
    char letter2;
    char cipher2;
    char letter3;
    char cipher3;
    char letter4;
    char cipher4;
    char letter5;
    char cipher5;

    printf("Lets cipher a five letter word...\nEnter your first letter: ");
    scanf("%c", &letter1);

    printf("Enter your second letter: ");
    scanf(" %c", &letter2); //The space in " %c" makes scanf skip any whitespace characters before reading the next character.

    printf("Enter your third letter: ");
    scanf(" %c", &letter3);

    printf("Enter your fourth letter: ");
    scanf(" %c", &letter4);

    printf("Enter your fifth letter: ");
    scanf(" %c", &letter5);

    cipher1 = letter1 + 3;
    cipher2 = letter2 + 3;
    cipher3 = letter3 + 3;
    cipher4 = letter4 + 3;
    cipher5 = letter5 + 3;

    printf("the word is: %c%c%c%c%c\n", letter1, letter2, letter3, letter4, letter5);
    printf("the coded word is: %c%c%c%c%c\n", cipher1, cipher2, cipher3, cipher4, cipher5);

    return 0;
}