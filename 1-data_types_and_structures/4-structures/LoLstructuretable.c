#include <stdio.h>
#define DIM 128
#define N 5

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
    Juego juego[N];

    for (int i = 0; i < N; i++){
        printf("Jugador %d:\n", i+1);
        printf("¿Cuál es tu nombre de juego?: ");
        gets(juego[i].jugador.usuario);
        printf("¿Con qué campeón has jugado tu última partida?: ");
        gets(juego[i].campeon);
        printf("¿Cuántas kills has hecho?: ");
        scanf("%d", &juego[i].kda[0]);
        printf("¿Cuántas veces has muerto?: ");
        scanf("%d", &juego[i].kda[1]);
        printf("Cuántas asistencias has hecho?: ");
        scanf("%d", &juego[i].kda[2]);
        getchar();

        kda = ((double)juego[i].kda[0] + juego[i].kda[2])/juego[i].kda[1];

        printf("%s, tu KDA ratio con %s ha sido %.2lf.\n", juego[i].jugador.usuario, juego[i].campeon, kda);
    }

    return 0;
}