#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

#define DELTA_T 0.01

struct TCoord {
    double x;
    double y;
};

typedef struct TCoord Coord;

void actualizar(Coord *pos, Coord *vel, Coord acc){
    vel->x += acc.x * DELTA_T;
    vel->y += acc.y * DELTA_T;
    pos->x += vel->x * DELTA_T;
    pos->y += vel->y * DELTA_T;
}

void pintar(Coord pos, Coord vel){
    printf("%.2lfm(%.2lfm/s)\t%.2lfm(%.2lfm/s)\n", pos.x, vel.x, pos.y, vel.y);
}

int main(){
    struct TCoord pos = { 0., 0.  },
                  vel = { 4., 50.  },
                  acc = { 0., -9.80665  };

    double angulo, fuerza, radianes;

    printf("Escribe el ángulo: ");
    scanf("%lf", &angulo);
    printf("Escribe la fuerza: ");
    scanf("%lf", &fuerza);

    radianes = (angulo * M_PI) / 180;

    vel.x = round(cos(radianes) * fuerza);
    vel.y = round(sin(radianes) * fuerza);

    bool impacto = false;
    while(!impacto){
        actualizar(&pos, &vel, acc);
        if(pos.y <= 0)
            impacto = true;
        else{
        pintar(pos, vel);
        usleep(100000);
        }
    }

    return EXIT_SUCCESS;
}
