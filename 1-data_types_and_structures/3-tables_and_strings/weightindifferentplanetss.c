#include <stdio.h>

#define LUNA 0.1655
#define MARTE 0.3895
#define JUPITER 2.64
#define MILLER 1.3
#define PANDORA 0.8
#define VULCANO 1.4

int main () {
    double weight, moon, mars, jupiter, miller, pandora, vulcano;

    printf("introduce your weight: ");
    scanf("%lf", &weight);

    moon = weight*LUNA;
    mars = weight*MARTE;
    jupiter = weight*JUPITER;
    miller = weight*MILLER;
    pandora = weight*PANDORA;
    vulcano = weight*VULCANO;

    printf("your weight in the earth is: %.2lf\n", weight);
    printf("your weight in the moon is: %.2lf\n", moon);
    printf("your weight in mars is: %.2lf\n", mars);
    printf("your weight in jupiter is: %.2lf\n", jupiter);
    printf("your weight in the planet miller is: %.2lf\n", miller);
    printf("your weight in pandora is: %.2lf\n", pandora);
    printf("your weight in vulcano is: %.2lf\n", vulcano);

    return 0;
}