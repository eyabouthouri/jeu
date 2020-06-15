

#include <stdio.h>
#include <stdlib.h>
#include<SDL/SDL.h>
#include<SDL/SDL_image.h>
#include"ennemi.h"

void animateEnnemi(ennemi* E)
{ 
if((*E).state==waiting)         
 {                                 
       
        (*E).inum=0;       //inum de l image 
}

    if((*E).state==following)
{

     (*E).inum=1;
        
}
    if((*E).state==running_away)               
        (*E).inum=2;
    else if((*E).state==attacking)
         
{if((*E).inum<2)(*E).inum++;
        if((*E).inum<6) (*E).inum++;}
}

/**
* @brief To initialize the ennemi E .

* @return Nothing
*/

void moveEnnemi(ennemi* E, SDL_Rect pos)  //pos heya lposition mta3 ljoueur
{
    if(((*E).state==following)||((*E).state==attacking))
    {
        if((*E).posennemi.x<pos.x+135)
            (*E).posennemi.x+=4;
        else if((*E).posennemi.x>pos.x+145)
            (*E).posennemi.x-=4;
    }
    if((*E).state==waiting)
    {
        if((*E).d==0)
        {
            if((*E).posennemi.x<(*E).ixmax)
                (*E).posennemi.x+=5;
            else (*E).d=1;
        }
        else if((*E).d==1)
        {
            if((*E).posennemi.x>(*E).ixmin)
                (*E).posennemi.x-=5;
            else (*E).d=0;
        }
    }
    if((*E).state==running_away)
        (*E).posennemi.x+=10;
}


void updateEnnemiState (ennemi* E, int dist) 
{ 
if ((*E).state!=running_away)
   { if (dist<600)
{
      

    if(dist>300)

            (*E).state=following;

    else if(dist>100)
            (*E).state=attacking;
}
else 
{
(*E).state=waiting;
}
}

}

