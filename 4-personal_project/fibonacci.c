#include <stdio.h>

int fibonacci (int n);

int main () {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("%d\n", fibonacci(n));

    return 0;

}

int fibonacci (int n) {
    if (n==1 || n==2) {
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}