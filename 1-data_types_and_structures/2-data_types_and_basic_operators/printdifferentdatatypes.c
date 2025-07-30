#include <stdio.h>

int main() {
    char sexo;
    int cp;
    int hp;
    double peso;
    double altura;
    int caramelos;
    
    printf("Ingrese su sexo (M/F): \n");
    scanf("%c", &sexo);
    
    printf("Ingrese numero de CP: \n");
    scanf("%d", &cp);
    
    printf("Ingrese su HP: \n");
    scanf("%d", &hp);
    
    printf("Ingrese su peso en Kg: \n");
    scanf("%lf", &peso);
    
    printf("Ingrese su altura en m: \n");
    scanf("%lf", &altura);
    
    printf("Ingrese su numero de caramelos: ");
    scanf("%d", &caramelos);
    
    printf("Sexo: %c \n", sexo);
    printf("CP: %d \n", cp);
    printf("HP: %d \n", hp);
    printf("Peso: %.1lf \n", peso);
    printf("Altura: %.2lf \n", altura);
    printf("Caramelos: %d", caramelos);
}