#include <stdio.h>
#include "fonctions.h"
#include <stdlib.h>
#define h (1)

int main() {
    /*début initialisation*/
    VECTEUR position;
    position.x = 0;
    position.y = 0;
    position.z = 0;
    VECTEUR acceleration;
    acceleration.x = 1;
    acceleration.y = 0;
    acceleration.z = 0;
    VECTEUR vitesse;
    vitesse.x = 0;
    vitesse.y = 0;
    vitesse.z = 0;
    VECTEUR nouvelleVitesse;
    VECTEUR nouvellePosition;
    int i=0;
    /*fin initialisation*/
    while(i<10){
        /*début code*/
        calculVitesse(&acceleration,&vitesse,&nouvelleVitesse,h);
        calculPosition(&nouvelleVitesse,&position,&nouvellePosition,h);
        recopie(&position,&nouvellePosition);
        recopie(&vitesse,&nouvelleVitesse);
        printf("x=%d y=%d z=%d\n",position.x, position.y, position.z);
        i++;
        /*fin code*/
    }
    return 0;
}