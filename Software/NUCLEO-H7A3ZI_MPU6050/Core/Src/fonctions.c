#include "fonctions.h"

int calculVitesse1D(int acceleration, int vitesseActuelle, int pas){
    return acceleration*pas + vitesseActuelle;
}

void primitive(VECTEUR* derivee, VECTEUR* constante,VECTEUR* primitive, int pas){
    primitive->x = calculVitesse1D(derivee->x, constante->x, pas);
    primitive->y = calculVitesse1D(derivee->y, constante->y, pas);
    primitive->z = calculVitesse1D(derivee->z, constante->z, pas);
}

void calculVitesse(VECTEUR* acceleration,VECTEUR* vitesseActuelle,VECTEUR* nouvelleVitesse, int pas){
    primitive(acceleration,vitesseActuelle,nouvelleVitesse,pas);
}

void calculPosition(VECTEUR* vitesse,VECTEUR* positionActuelle,VECTEUR* nouvellePosition,int pas){
    primitive(vitesse,positionActuelle,nouvellePosition,pas);
}

int calculCourantMoteur(int reg){
    return reg * 3,3 /(4095*G*Rm);
}

float calculCCR(float tensionMoteur,float Vcc){
    return tensionMoteur*ARR/Vcc;
}

void recopie(VECTEUR * nouveau, VECTEUR * ancien){
    nouveau->x=ancien->x;
    nouveau->y=ancien->y;
    nouveau->z=ancien->z;

}
