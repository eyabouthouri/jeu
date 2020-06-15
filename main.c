#include<stdio.h>
#include<stdlib.h>
#include<SDL/SDL.h>
#include<SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include "Enigme.h"
/**************************************************************/
/**************************************************************/


int main(int argc, char *argv[])
{

 
	SDL_Surface *screen; 
 screen = NULL; 
SDL_Init(SDL_INIT_VIDEO);
screen = SDL_SetVideoMode(952,535,24,SDL_HWSURFACE | SDL_DOUBLEBUF);
SDL_WM_SetCaption( "enigmes dynamique", NULL ); 
 enigme();

 SDL_Quit();

return 0;
}
