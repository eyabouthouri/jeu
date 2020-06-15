
#include <stdio.h>
#include <stdlib.h>
#include<SDL/SDL.h>
#include<SDL/SDL_image.h>
#include"ennemi.h"
int main( int argc, char** argv )
{
SDL_Init(SDL_INIT_EVERYTHING);
SDL_Init(SDL_INIT_VIDEO);
SDL_Surface *screen,*image[2],*background;
int exit=0,n=0;
int nbClickDroite =2;
int nbClickGauche =2;
SDL_Event event;
ennemi E;
int i;
SDL_Rect pos;
pos.y=150;
pos.x=55;
E.posennemi.x=700;
E.posennemi.y=150;


background=IMG_Load("b.png");


image[0]=IMG_Load("00.png");
image[1]=IMG_Load("01.png");
image[2]=IMG_Load("(11).png");


E.Ennemi[0]=IMG_Load("2.png");
E.Ennemi[1]=IMG_Load("2.png");
E.Ennemi[2]=IMG_Load("7.png");
E.Ennemi[3]=IMG_Load("2.png");
E.Ennemi[4]=IMG_Load("2.png");
E.Ennemi[5]=IMG_Load("2.png");
E.Ennemi[6]=IMG_Load("2.png");

E.state=waiting;
E.ixmin=700;
E.ixmax=900;
E.d=0;
int dist;
SDL_EnableKeyRepeat(60,60);
screen=SDL_SetVideoMode(800,300,32,SDL_SWSURFACE);
while(exit!=1)
{
animateEnnemi(&E);
updateEnnemiState(&E,E.posennemi.x-pos.x);
moveEnnemi(&E,pos);
while(SDL_PollEvent(&event))
{
if(event.type==SDL_KEYDOWN)
{
if(event.key.keysym.sym==SDLK_LEFT)
{
pos.x-=7;

nbClickGauche++;
if(nbClickGauche%2==1)
{
n=1;
}else{
n=0;
}
}
if(event.key.keysym.sym==SDLK_RIGHT)
{
pos.x+=7;
nbClickDroite++;
if(nbClickDroite%2==1)
{
n=1;
}else{
n=0;
}

}
if(event.key.keysym.sym==SDLK_UP)
pos.y-=7;


if(event.key.keysym.sym==SDLK_DOWN)
pos.y+=7;

if(event.key.keysym.sym==SDLK_ESCAPE)
exit=1;


if(event.key.keysym.sym==SDLK_SPACE)
{E.state=running_away;
n=2;
}
}
}

SDL_BlitSurface(background,NULL,screen,NULL);
SDL_BlitSurface(image[n],NULL,screen,&pos);
SDL_BlitSurface(E.Ennemi[E.inum],NULL,screen,&E.posennemi);
SDL_Flip(screen);
}
return 0;
}

