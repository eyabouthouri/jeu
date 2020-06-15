#ifndef ENNEMI_H_INCLUDED
#define ENNEMI_H_INCLUDED

#include<SDL/SDL.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL_image.h>

typedef enum STATE STATE;
enum STATE { waiting, following, attacking,running_away};
typedef struct Ennemi
{
    int hp;
    SDL_Surface *Ennemi[7];
    SDL_Rect posennemi;
    STATE state;
    int inum;
    int ixmin;
    int ixmax;
    int d;
} ennemi;
void animateEnnemi(ennemi* E);
void updateEnnemiState (ennemi* E, int dist);
void moveEnnemi(ennemi* E, SDL_Rect pos);


#endif
