#include <stdio.h>

int main () {
    int a, b, *p, *q;
    double c, *m;

    p = &a;
    q = &b;
    m = &c;

    printf("Introduce un número: ");
    scanf("%d", p);
    printf("Introduce otro número: ");
    scanf("%d", q);

    *m = 0.5*((*p)+(*q));

    printf("media = %.2lf.\n", *m);
    return 0;
}