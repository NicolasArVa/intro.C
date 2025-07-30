#include <stdio.h>
#define DIM 128

typedef struct {
    char usuario[DIM];
    int nivel;
    int experiencia;
} juego;

typedef struct {
    juego jugador;
    char campeon[DIM];
    int kda[3];
} Juego;

int main (){
    double kda;
    Juego juego;

    printf("¿Cuál es tu nombre de juego?: ");
    gets(juego.jugador.usuario);
    printf("¿Cuál es tu nivel?: ");
    scanf("%d", &juego.jugador.nivel);
    printf("¿Cuánta experiencia has adquirido en ese nivel?: ");
    scanf("%d", &juego.jugador.experiencia);
    getchar();
    printf("¿Con qué campeón has jugado tu última partida?: ");
    gets(juego.campeon);
    printf("¿Cuántas kills has hecho?: ");
    scanf("%d", &juego.kda[0]);
    printf("¿Cuántas veces has muerto?: ");
    scanf("%d", &juego.kda[1]);
    printf("Cuántas asistencias has hecho?");
    scanf("%d", &juego.kda[2]);

    kda = ((double)juego.kda[0] + juego.kda[2])/juego.kda[1];

    printf("%s, de nivel %d y experiencia %d, tu KDA ratio con %s ha sido %.2lf.\n", 
        juego.jugador.usuario, juego.jugador.nivel, juego.jugador.experiencia, juego.campeon, kda);

    return 0;
}