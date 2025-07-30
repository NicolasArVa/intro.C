#include <stdio.h>

int main() {
    int a=5, b=2;
    double x;

    x = (double)a / b; // (double)5 == 5.0 type casting
    printf("%lf\n", x); //Muestra 2.500000

    x = a/b;
    printf("%lf\n", x); // Muestra 2.000000

    printf("Answers:\n");
    x = 5 / 2 + 3.5 * -1;
    printf("%lf\n", x);
    x = 5 / (double)2 + 3.5 * -1;
    printf("%lf\n", x);
    x = 5 / (double)2 + (int)3.5 * -1;
    printf("%lf\n", x);
    x = (int)(5 / 2 + 3.5 * -1);
    printf("%lf\n", x);

    return 0;
}