#include <stdio.h>
#define DIM 128
#define PLAYER_NUMBER 2
#define GAME_NUMBER 3

typedef struct {
    char campeon[DIM];
    int kda[3];
} Juego;

typedef struct {
    char usuario[DIM];
    int nivel;
    int experiencia;
    Juego juegos[GAME_NUMBER];
} Jugador;


int main (){
    double kda;
    Jugador jugadores[PLAYER_NUMBER];

    for (int i = 0; i < PLAYER_NUMBER; i++) {
        printf("Jugador %d:\n", i+1);
        printf("¿Cuál es tu nombre de juego?: ");
        gets(jugadores[i].usuario);

        for (int j = 0; j < GAME_NUMBER; j++) {
            printf("Juego número %d:\n",j+1);
            printf("¿Con qué campeón has jugado tu partida %d?: ", j+1);
            gets(jugadores[i].juegos[j].campeon);
            printf("¿Cuántas kills has hecho?: ");
            scanf("%d", &jugadores[i].juegos[j].kda[0]);
            printf("¿Cuántas veces has muerto?: ");
            scanf("%d", &jugadores[i].juegos[j].kda[1]);
            printf("Cuántas asistencias has hecho?: ");
            scanf("%d", &jugadores[i].juegos[j].kda[2]);
            getchar();

            kda = ((double)jugadores[i].juegos[j].kda[0] + jugadores[i].juegos[j].kda[2])/jugadores[i].juegos[j].kda[1];

            printf("%s, tu KDA ratio con %s ha sido %.2lf.\n", jugadores[i].usuario, jugadores[i].juegos[j].campeon, kda);
        }
    }

    return 0;
}