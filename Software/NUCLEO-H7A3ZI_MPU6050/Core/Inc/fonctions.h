#define ARR 1000
#define Rm (0,0047)
#define G 200
#ifndef UNTITLED1_FONCTIONS_H
#define UNTITLED1_FONCTIONS_H

#include <stdlib.h>
#include <stdio.h>

#endif //UNTITLED1_FONCTIONS_H

typedef struct Vecteur{
    int x;
    int y;
    int z;
}VECTEUR;

int calculVitesse1D(int acceleration, int vitesseActuelle, int pas);
void primitive(VECTEUR* derivee, VECTEUR* constante,VECTEUR* primitive, int pas);
void calculVitesse(VECTEUR* acceleration,VECTEUR* vitesseActuelle,VECTEUR* nouvelleVitesse, int pas);
void calculPosition(VECTEUR* vitesse,VECTEUR* positionActuelle,VECTEUR* nouvellePosition,int pas);
int calculCourantMoteur(int reg);
float calculCCR(float tensionMoteur,float Vcc);
void recopie(VECTEUR * nouveau, VECTEUR * ancien);

