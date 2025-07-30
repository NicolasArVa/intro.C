#include <stdio.h>

int main() {
    double dollars;
    double euros;

    printf("Enter the amount of dollars: ");
    scanf("%lf", &dollars);

    euros = dollars * 0.859;

    printf("%lf dollars are %lf euros.", dollars, euros);

    return 0;
}