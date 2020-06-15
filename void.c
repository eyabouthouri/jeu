#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include "Enigme.h"
#include <math.h>

/**************************************************************/
void enigme()
{
    SDL_Surface *ecran = NULL, *texte = NULL,*fond = NULL;
	SDL_Rect position,pos;
	SDL_Event event;
	TTF_Font *police = NULL;
	SDL_Color couleurNoire = {233, 141, 37};
	int continuer = 1;
        const int iMAX =99, iMIN = 0;
        char mot[200]= "";
        char lettre[200]= "";
        int Essai=10;
        int inbEssaie=0;
        int iscore=20;
        int inbEssaieMax=10;
	position.x = 0;
	position.y = 0;
	pos.x=200;
	pos.y=450;
	char nbentree[2];
	int essai=10;
	int pressure=0,centaine=0;;
	int nb_entree=0;
	srand((unsigned) time(NULL));
	int nb_mystere = (rand() % (iMAX -iMIN + 1)) +iMIN;

	SDL_Init(SDL_INIT_VIDEO);
	TTF_Init();
	printf("clear\n");

	ecran = SDL_SetVideoMode(1000, 539, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);
	SDL_WM_SetCaption("Gestion du texte avec SDL_ttf", NULL);
	fond=IMG_Load("password.png");
	police = TTF_OpenFont("8-BIT WONDER.TTF", 10);
    texte = TTF_RenderText_Blended(police,nbentree, couleurNoire);
	
    SDL_BlitSurface(fond,NULL,ecran,&position);
	SDL_BlitSurface(texte,NULL,ecran,&pos);

	SDL_Flip(ecran);

	while (continuer)
	{
		SDL_WaitEvent(&event);
		switch(event.type)
		{
			case SDL_QUIT:
			continuer = 0;
			break;
			case SDL_KEYDOWN:
				switch (event.key.keysym.sym)
					{

						case SDLK_0:
						if (pressure==0)
						{
						nbentree[0]='0';
						texte = TTF_RenderText_Blended(police,nbentree, couleurNoire);
						//fond=IMG_Load("maia.jpg");

						SDL_BlitSurface(fond,NULL,ecran,&position);
						SDL_BlitSurface(texte,NULL,ecran,&pos);
						SDL_Flip(ecran);
						pressure=1;
						}
						else if(pressure==1)
						{
						nbentree[1]='0';
						texte = TTF_RenderText_Blended(police,nbentree, couleurNoire);
						//fond=IMG_Load("maia.jpg");
					
						SDL_BlitSurface(fond,NULL,ecran,&position);
						SDL_BlitSurface(texte,NULL,ecran,&pos);
						SDL_Flip(ecran);
						pressure=0;
						centaine=1;
						}
						else if (centaine==1)
						{
						nbentree[2]='0';
						texte = TTF_RenderText_Blended(police,nbentree, couleurNoire);
						//fond=IMG_Load("maia.jpg");
					
						SDL_BlitSurface(fond,NULL,ecran,&position);
						SDL_BlitSurface(texte,NULL,ecran,&pos);
						SDL_Flip(ecran);
							
						}
						

						break;
						case SDLK_1:
						if (pressure==0)
						{
						nbentree[0]='1';
						texte = TTF_RenderText_Blended(police,nbentree, couleurNoire);
						//fond=IMG_Load("maia.jpg");

						SDL_BlitSurface(fond,NULL,ecran,&position);
						SDL_BlitSurface(texte,NULL,ecran,&pos);
						SDL_Flip(ecran);
						pressure=1;
						}
						else
						{
						nbentree[1]='1';
						texte = TTF_RenderText_Blended(police,nbentree, couleurNoire);
						//fond=IMG_Load("maia.jpg");
					
						SDL_BlitSurface(fond,NULL,ecran,&position);
						SDL_BlitSurface(texte,NULL,ecran,&pos);
						SDL_Flip(ecran);
						pressure=0;
						}
						break;
						case SDLK_2:
						if (pressure==0)
						{
						nbentree[0]='2';
						texte = TTF_RenderText_Blended(police,nbentree, couleurNoire);
						//fond=IMG_Load("maia.jpg");
					
						SDL_BlitSurface(fond,NULL,ecran,&position);
						SDL_BlitSurface(texte,NULL,ecran,&pos);
						SDL_Flip(ecran);
						pressure=1;
						}
						else
						{
						nbentree[1]='2';
						texte = TTF_RenderText_Blended(police,nbentree, couleurNoire);
						//fond=IMG_Load("maia.jpg");
					
						SDL_BlitSurface(fond,NULL,ecran,&position);
						SDL_BlitSurface(texte,NULL,ecran,&pos);
						SDL_Flip(ecran);
						pressure=0;
						}
						break;
						case SDLK_3:
						if (pressure==0)
						{
							nbentree[0]='3';
							texte = TTF_RenderText_Blended(police,nbentree, couleurNoire);
							//fond=IMG_Load("maia.jpg");
					
							SDL_BlitSurface(fond,NULL,ecran,&position);
							SDL_BlitSurface(texte,NULL,ecran,&pos);
							SDL_Flip(ecran);
							pressure=1;
						}
						else
						{
							nbentree[1]='3';
							texte = TTF_RenderText_Blended(police,nbentree, couleurNoire);
							//fond=IMG_Load("maia.jpg");

							SDL_BlitSurface(fond,NULL,ecran,&position);
							SDL_BlitSurface(texte,NULL,ecran,&pos);
							SDL_Flip(ecran);
							pressure=0;
						}
							break;
						case SDLK_4:
						if (pressure==0)
						{
							nbentree[0]='4';
							texte = TTF_RenderText_Blended(police,nbentree, couleurNoire);
							//fond=IMG_Load("maia.jpg");
					
							SDL_BlitSurface(fond,NULL,ecran,&position);
							SDL_BlitSurface(texte,NULL,ecran,&pos);
							SDL_Flip(ecran);
							pressure=1;
						}
						else
						{
							nbentree[1]='4';
							texte = TTF_RenderText_Blended(police,nbentree, couleurNoire);

					
							SDL_BlitSurface(fond,NULL,ecran,&position);
							SDL_BlitSurface(texte,NULL,ecran,&pos);
							SDL_Flip(ecran);
							pressure=0;
						}
						break;
						case SDLK_5:
						if (pressure==0)
						{
							nbentree[0]='5';
							texte = TTF_RenderText_Blended(police,nbentree, couleurNoire);


							SDL_BlitSurface(fond,NULL,ecran,&position);
							SDL_BlitSurface(texte,NULL,ecran,&pos);
							SDL_Flip(ecran);
							pressure=1;
						}
						else
						{
							nbentree[1]='5';
							texte = TTF_RenderText_Blended(police,nbentree, couleurNoire);
					
					
							SDL_BlitSurface(fond,NULL,ecran,&position);
							SDL_BlitSurface(texte,NULL,ecran,&pos);
							SDL_Flip(ecran);
							pressure=0;
						}
						break;
						case SDLK_6:
						if (pressure==0)
						{
							nbentree[0]='6';
							texte = TTF_RenderText_Blended(police,nbentree, couleurNoire);

					
							SDL_BlitSurface(fond,NULL,ecran,&position);
							SDL_BlitSurface(texte,NULL,ecran,&pos);
							SDL_Flip(ecran);
							pressure=1;
						}
						else
						{
							nbentree[1]='6';
							texte = TTF_RenderText_Blended(police,nbentree, couleurNoire);

					
							SDL_BlitSurface(fond,NULL,ecran,&position);
							SDL_BlitSurface(texte,NULL,ecran,&pos);
							SDL_Flip(ecran);
							pressure=0;
						}
						break;
						case SDLK_7:
						if (pressure==0)
						{
							nbentree[0]='7';
							texte = TTF_RenderText_Blended(police,nbentree, couleurNoire);


							SDL_BlitSurface(fond,NULL,ecran,&position);
							SDL_BlitSurface(texte,NULL,ecran,&pos);
							SDL_Flip(ecran);
							pressure=1;
						}
						else
						{
							nbentree[1]='7';
							texte = TTF_RenderText_Blended(police,nbentree, couleurNoire);

					
							SDL_BlitSurface(fond,NULL,ecran,&position);
							SDL_BlitSurface(texte,NULL,ecran,&pos);
							SDL_Flip(ecran);
							pressure=0;
						}
						break;
						case SDLK_8:
						if (pressure==0)
						{
							nbentree[0]='8';
							texte = TTF_RenderText_Blended(police,nbentree, couleurNoire);

					
							SDL_BlitSurface(fond,NULL,ecran,&position);
							SDL_BlitSurface(texte,NULL,ecran,&pos);
							SDL_Flip(ecran);
							pressure=1;
						}
						else
						{
							nbentree[1]='8';
							texte = TTF_RenderText_Blended(police,nbentree, couleurNoire);

					
							SDL_BlitSurface(fond,NULL,ecran,&position);
							SDL_BlitSurface(texte,NULL,ecran,&pos);
							SDL_Flip(ecran);
							pressure=0;
						}
						break;
						case SDLK_9:
						if (pressure==0)
						{
							nbentree[0]='9';
							texte = TTF_RenderText_Blended(police,nbentree, couleurNoire);
					
							SDL_BlitSurface(fond,NULL,ecran,&position);
							SDL_BlitSurface(texte,NULL,ecran,&pos);
							SDL_Flip(ecran);
							pressure=1;
						}
						else
						{
							nbentree[1]='9';
							texte = TTF_RenderText_Blended(police,nbentree, couleurNoire);
					
							SDL_BlitSurface(fond,NULL,ecran,&position);
							SDL_BlitSurface(texte,NULL,ecran,&pos);
							SDL_Flip(ecran);
							pressure=0;
						}
						break;
						case SDLK_RETURN:
do
    {
        sprintf(mot,"vous avez %d Essai a jouer ",inbEssaieMax-inbEssaie);
						nb_entree=atoi(nbentree);

        do
        {
           
         texte = TTF_RenderText_Blended(police, "Quel est le nombre", couleurNoire);
}
        while (nb_entree<0 ||nb_entree>99);
        if(nb_entree<0 || nb_entree>99)
        {

         texte = TTF_RenderText_Blended(police, "Entrer un nombre entre 0 et 99!", couleurNoire);
        }


					if (nb_entree < nb_mystere)
{
					texte = TTF_RenderText_Blended(police,"Mon nombre est plus grand", couleurNoire);
inbEssaie++;
iscore--;
}
					
					else if (nb_entree > nb_mystere)
{
					texte = TTF_RenderText_Blended(police,"Mon nombre est plus petit", couleurNoire);
					inbEssaie++;
}
					else if  (nb_entree == nb_mystere)
{
					texte = TTF_RenderText_Blended(police,"Exact!tu as trouver Mon nombre", couleurNoire);
inbEssaie++;
iscore--;

}
if(inbEssaie == inbEssaieMax )
        {
             
            sprintf (mot,"Vous avez effectué 10 essaies sans parvenir à deviner Mon nombre etait : %d\n",nb_mystere );

        }
        		
					             
SDL_BlitSurface(fond,NULL,ecran,&position);

					SDL_BlitSurface(texte,NULL,ecran,&pos);
					SDL_Flip(ecran);

				break;
			}
   
while ( (nb_entree != nb_mystere) &&  ( inbEssaie < inbEssaieMax ) );

}
				
            	break;
			}

			
		}

			
	TTF_CloseFont(police);
	TTF_Quit();
	SDL_FreeSurface(texte);
	SDL_FreeSurface(ecran);
	SDL_FreeSurface(fond);
	SDL_Quit();
    
}
