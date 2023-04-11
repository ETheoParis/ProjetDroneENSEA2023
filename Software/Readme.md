
* Asservissement(vitesseVoulue,vitesseActuelle){renvoie les valeurs des tensions à appliquer aux moteurs pour avancer dans une direction à la vitesse voulue}

calculevitesse(accelerationAngulaire, accelerationTranslation){calcul vitesse angulaire et vitesse translation avec les données d'accéléromètre et gyroscope}

monte(metre){commande les moteurs pour monter de x metres}

avance(metre){commande les moteurs pour avancer de x metres}

descend(metre){commande les moteurs pour descendre de x metres}

pose(){pose le drone en ralentissant sa chute quand proche du sol}

calculTension(vitesse){calcul la tension à appliquer à un moteur pour qu'il tourne à une certaine vitesse}

altitudeBasse(courant dans les moteurs){true si le drone est proche du sol}

commande moteur(tension/vitesse){commande les moteurs avec la tension/vitesse voulue}
