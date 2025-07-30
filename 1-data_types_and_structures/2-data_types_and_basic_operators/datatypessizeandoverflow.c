#include <stdio.h>
#include <limits.h>

int main() {
    printf("bytes per char = %lf\n", sizeof(char));
    printf("bytes per int = %lf\n", sizeof(int));

    printf("Min int = %lf\n", INT_MIN);
    printf("Max int = %lf", INT_MAX);

    return 0;
}