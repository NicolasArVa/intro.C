#include <stdio.h>

int main () {
    int x=3;

    printf("Recuerda: la operacion devuelve 1 si se cumple (true) o 0 si no se cumple (false).\n");

    printf("El resultado de evaluar x>2 && x<=5 es: %d\n", x>2 && x<=5);
    printf("El resultado de evaluar x!=2 && x>4 es: %d\n", x!=2 && x>4);
    printf("El resultado de evaluar x>=2 || x>5 es: %d\n", x>=2 || x>5);
    printf("El resultado de evaluar x>3 || x==2 es: %d\n", x>3 || x==2);
    printf("\n");

    printf("El resultado de evaluar x==3 && x<2 && x%%2==1 es: %d\n", x==3 && x<2 && x%2==1);
    printf("El resultado de evaluar x>=3 || x<2 && x%%2==0 es: %d\n", x>=3 || x<2 && x%2==0);
    printf("El resultado de evaluar x>=3 || (x<2 && x%%2==0) es: %d\n", x>=3 || (x<2 && x%2==0));
    printf("El resultado de evaluar (x>=3 || x<2) && x%%2==0 es: %d\n", (x>=3 || x<2) && x%2==0);
    printf("\n");

    printf("El resultado de evaluar !(x<2) es: %d\n", !(x<2));
    printf("El resultado de evaluar !x y x==0 es el mismo: %d y %d\n", !x, x==0);
    printf("El resultado de evaluar !(x%%2) y x%%2==0 es el mismo: %d y %d\n", !(x%2), x%2==0);
    printf("El resultado de evaluar x y x!=0 es el mismo.\n");
    printf("El resultado de evaluar x%%2 y x%%2!=0 es el mismo: %d y %d\n", x%2, x%2!=0);

    x = 10;
    printf("Con x=10:\n");
    printf("El resultado de x%%2==0 && x*2<=100 && -x*30<=0 es: %d\n", x%2==0 && x*2<=100 && -x*30<=0);
    printf("El resultado de x%%2==0 || x*2>=100 && -x*30<=0 es: %d\n", x%2==0 || x*2>=100 && -x*30<=0);
    printf("El resultado de x>=10 || x-7>5 && x+5==15 es: %d\n", x>=10 || x-7>5 && x+5==15);
    printf("El resultado de x>=10 || (x-7>5 && x+5==15) es: %d\n", x>=10 || (x-7>5 && x+5==15));

    return 0;
}