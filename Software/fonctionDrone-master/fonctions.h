//
// Created by etheo on 11/04/2023.
//
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
int calculCourantMoteur(int reg);
int calculVitesse1D(int acceleration, int vitesseActuelle, int pas);
void primitive(VECTEUR* derivee, VECTEUR* constante,VECTEUR* primitive ,int pas);
void calculVitesse(VECTEUR* acceleration,VECTEUR* vitesseActuelle,VECTEUR* nouvelleVitesse,int pas);
void calculPosition(VECTEUR* acceleration,VECTEUR* positionActuelle,VECTEUR* nouvellePosition,int pas);
float calculCCR(float tensionVoulue,float VCC);
void recopie(VECTEUR * nouveau, VECTEUR * ancien);
