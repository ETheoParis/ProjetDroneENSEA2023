# ProjetDroneENSEA2023


I. Introduction :


Nous avons choisi de constituer un groupe de 5 personnes pour asservir et concevoir le PCB d'un drone. La structure en impression 3D nous a été fourni, nous nous sommes donc penchés sur la partie électronique et informatique.
Selon le dictionnaire Larousse, un drone "est un petit avion télécommandé utilisé pour des tâches diverses". Dans notre cas, le cahier des charges impose que notre drone puisse décoller, voler de manière rectiligne et atterrir après avoir volé pendant x mètres. 
Pour satisfaire le cahier des charges, nous avons divisé le travail entre les membres du groupe. Jack Du, Nesrine Mathlouthi, Cassandre Chandelier et Théo Paris se sont occupés de l’asservissement et du programme informatique pendant que Fannie Bichemin a réalisé le schématique  et l’éditeur de PCB ainsi que la soudure des composants.

I.1 Organisation :

Nous avons choisi de créer un groupe Messenger pour présenter nos avancées individuelles en dehors des séances de projet. Nous présentions nos recherches et les idées que nous avions pour résoudre les problèmes que nous avons rencontrés. De plus, nous avons réalisé dès la première séance un diagramme de Gantt pour suivre l’évolution de nos tâches respectives et du projet dans sa globalité. 


Que ce soit pour la surveillance de territoires, l'inspection de bâtiments, la cartographie de zones difficiles d'accès ou encore la livraison de colis, les drones sont devenus indispensables pour de nombreuses entreprises. Il s’agit de petits avions télécommandés utilisés pour des tâches diverses. (Larousse)

Notre objectif est d’asservir et de concevoir le PCB d’un drone quadcoptère dont la structure nous a été fournie. Nous veillerons à respecter le cahier des charges suivant : 
- Véhicule autonome
- Processeur sur carte-mère
- Pas de contrôle à distance  
- Code embarqué : C sur STM32
- Avancer, décoller
- Avancer "droit" puis de 10 m.

____________________________________________________________________________________________________________________________________________________________

I.1 Répartition des tâches :

Afin de satisfaire le cahier des charges, nous avons constitué un groupe de cinq personnes formé par :
- Fannie Bichemin (Hardware)
- Cassandre Chandelier, Jack Du, Nesrine Mathlouthi et Théo Paris (Asservissement et Software)

En ce qui concerne les livrables tels que le rapport et la soutenance, ils ont été complétés par les membres en expliquant les parties qui les concernent. 
____________________________________________________________________________________________________________________________________________________________

I.2 Organisation :

Afin de travailler facilement, nous avons choisi de créer un groupe Messenger. Ce dernier nous a permis de partager nos avancées individuelles en dehors des séances de projet. Nous présentions nos recherches et idées que nous avions pour résoudre les problèmes que nous avons rencontrés. De plus, nous avons réalisé dès la première séance un diagramme de Gantt pour suivre l’évolution de nos tâches respectives et du projet dans sa globalité. 

____________________________________________________________________________________________________________________________________________________________
____________________________________________________________________________________________________________________________________________________________

II.Hardware

II. Réalisation :

II.1 Le PCB :

Afin de réaliser le PCB, nous avons commencé par faire le schématique. 
Nous avons tout d’abord rassemblé toutes les datasheets et nous avons dessiné un diagramme pour visualiser le placement des composants (Cf figure.1 ) ainsi que le nombre de composants nécessaires pour concevoir le PCB. Par la suite, nous avons regardé les schémas présents dans les datasheets pour connaitre la valeurs des résistances et des condensateurs à placer autour du régulateur et des blocs moteurs. Nous nous sommes également aidés du TD concernant KiCad pour trouver les valeurs des résistances à placer autour de la carte STM32. 

          
![diagramme hardware](https://github.com/ETheoParis/ProjetDroneENSEA2023/blob/main/Images/diagramme%20hard.JPG)




Figure 1: Diagramme qui représente les différents éléments électroniques utilisés 



Nous avons donc abouti au schématique suivant :




![schématique1](https://github.com/ETheoParis/ProjetDroneENSEA2023/blob/main/Images/diagramme_partie1.JPG)



	Figure 2.a : Première partie du schématique du projet




![diagramme partie2](https://github.com/ETheoParis/ProjetDroneENSEA2023/blob/main/Images/diagramme_partie2.JPG)


Figure 2.b : Deuxième partie du schématique du projet (les moteurs)


Le schématique comporte plusieurs parties: 

-La carte STM32
-Les boutons poussoirs
-La centrale inertielle
-La cellule de régulation
-Le connecteur SWD
-La cellule des 4 moteurs 
 
Pour ajouter les résistances, les condensateurs et les bobines, nous avons regardé les montages présentés dans les datasheets. Ces montages nous permettent de connaître le nombre et la valeur des résistances et des condensateurs à placer autour des composants centraux”.
Les problèmes rencontrés sont : 
Le choix des empreintes (faire attention au numéro à prendre le numéro 0603 et “l’option” handsolder pour faciliter la soudure ; Créer des empreintes si elles n’existent pas déjà dans les librairies en faisant surtout attention aux distances entre les pads ainsi que les contours). 
Ne pas oublier de mettre des power flag.
Les empreintes des condensateurs en fonction de leurs valeurs. 



Par la suite, nous avons placé les composants sur l’éditeur PCB. Il a fallu faire en sorte que la taille et la forme du PCB soient adaptées à l’emplacement prévu sur la base du drone imprimée en 3D. 


![editor PCB](https://github.com/ETheoParis/ProjetDroneENSEA2023/blob/main/Images/PCB_editor.JPG)

Figure 2.b : PCB 

Remarques:

Le PCB de gauche est la version qui aurait dû être fabriquée par le procédé “traditionnel”.  
Le PCB de droite est celui qui a été refait par Monsieur Papazouglou car il fallait modifier la manière de placer les composants puisque le PCB a été fabriqué par le système de gravure. 

Les problèmes rencontrés sont: 
Faire en sorte de relier de la manière la plus courte possible les pads entre eux. 

____________________________________________________________________________________________________________________________________________________________


Les choses à retenir:
Multiplier par 4 le “bloc moteur” (transistor, diode, connecteur, résistance, régulateur) et utiliser les coordonnées sur Kicad pour bien aligner les 4 blocs. 
Placer les condensateurs “liés” à la carte STM32 très proches du microprocesseur. 
Ne pas oublier de mettre des vias en plus un peu partout sur le PCB.

____________________________________________________________________________________________________________________________________________________________

Enfin, nous avons soudé les composants sur le PCB : 



![PCB soude](https://github.com/ETheoParis/ProjetDroneENSEA2023/blob/main/Images/PCBsoude.JPG)



Figure 3 : PCB soudé 

Remarque:
La dernière photo permet de montrer que les 3 diodes sont branchées dans le bon sens et qu’elles fonctionnent. 

Les problèmes rencontrés et les choses à retenir sont:
Mettre du flux pour éviter les courts circuits (surtout pour le microprocesseur et les composants très petits et très rapprochés).
Souder en premier les petits composants et en dernier les connecteurs (notamment pour éviter de les brûler).


____________________________________________________________________________________________________________________________________________________________


III. L’asservissement :

____________________________________________________________________________________________________________________________________________________________

III.1. Recherches préalables : 

Dans un premier temps, nous avons commencé par trouver une documentation adaptée à nos besoins. Il fut difficile de trouver des ressources pertinentes. Finalement, nous nous sommes basés principalement sur les articles suivants :

- Géométrie et commande des drones : https://www.techniques-ingenieur.fr/res/pdf/encyclopedia/42398210-s7818.pdf (1)
- State Space System Modelling of a Quad Copter UAV : https://arxiv.org/pdf/1908.07401.pdf (2)
- Cours d'asservissement de M.Haidar (3)


III.2. 1ère Modélisation : Discrétisation-Découplage 

L’objectif de cette modélisation est de réussir à déterminer notre commande u que nous pourrons exploiter par la suite via nos moteurs. 

Après avoir cherché la modélisation la plus proche de la réalité, on effectue une représentation d'état du système. On se base alors sur l'article (2) précédemment introduits. 

Nos paramètres d’entrées représentés par le vecteur X sont : 

l’accélération selon x 
l’accélération selon y
l’accélération selon z
l’accélération angulaire selon thêta 
l’accélération angulaire selon phi
l’accélération angulaire selon psi 

Nous avons basé notre premier modèle sur le document State Space System Modelling of a Quadcopter UAV qui donnait une représentation d'état du système.


Représentation d’état du système
![image](https://github.com/ETheoParis/ProjetDroneENSEA2023/blob/main/Images/ASSERVISSEMENT%20Repr%C3%A9sentation%20d'%C3%A9tat.png)

Après avoir mis en forme les équations sur Matlab et défini les paramètres de l’étude, on détermine les indices relatifs en cherchant CA^rho-1 ≠ 0. 
On obtient les résultats suivants : 

![image](https://github.com/ETheoParis/ProjetDroneENSEA2023/blob/main/Images/rho.png)


On doit donc calculer les rho de chaque ligne.
Avec matlab on trouve les différent rho tel que la matrice soit inversible. Pour cela il suffit que au moins 1 des coefficient de la ligne soit non nul.
Une fois la matrice de découplage obtenu la commande est obtenu par la relation suivante.


![image](https://github.com/ETheoParis/ProjetDroneENSEA2023/assets/128490640/45edf08e-c4a2-4969-8f78-6efd1792d97f)


On devrait ensuite pouvoir lier chaque commande avec la tension dans les moteurs. En effet U1 est la somme des forces, U2 le couple selon l'axe x,U3 le couple selon l'axe y,U4 le couple selon l'axe z.

On peut alors déterminer l’inverse de la matrice de découplage, on constate un problème car le système possède 4 commandes pour 6 sorties. On ne peut donc pas découpler les variables du système car le système est sous-actionné (cf cours d'asservissement).


Nous avons donc changé de modèle pour se baser sur celui de la simulation quadcopter (par Monsieur Djemai).


III. 3 Nouvelle modélisation :


On se base sur une nouvelle modélisation qui nous donne directement l'équation des couples et de la somme des forces des moteurs en fonction des accélérations. 
Il faudrait trouver un moyen de déterminer les fonctions seuil et les constants réstantes. On sait déja que mu est la force minimum des moteurs pour faire décoler de drone. Avec plus de temps il aurait surment été possible de faire fonctionner l'asservissement.


____________________________________________________________________________________________________________________________________________________________
____________________________________________________________________________________________________________________________________________________________

IV. Software :

##
Pour la partie code en C, le code sur carte NUCLEOH7A3ZI est présent sur le projet NUCLEOH7A3ZI_MPU6050. Nous n'avons pas optimisé et clarifié totalement le code suite à un problème de makefile sur les fonctions crées automatiquement par STM32 via l'ioc.
Le code a été également porté sur un autre projet (DroneFlying en l'occurence) pour le code à implémenter sur le PCB du drone.


1. PWM

En ce qui concerne le contrôle des 4 moteurs, on a décidé qu'elle se ferrait via une PWM (Pulse Width Modulation ou Modulation de largeur d'impulsion en français). 
La méthode PWM consiste à faire varier le rapport cyclique à une fréquence fixe pour ajuster la tension à la valeur cible souhaitée.


![image] 
(https://github.com/ETheoParis/ProjetDroneENSEA2023/blob/main/Images/PWM.png)

Figure 4 : PWM Fonctionnement


![image] 
(https://github.com/ETheoParis/ProjetDroneENSEA2023/blob/main/Images/PWM_Diagramme.png)

Figure 5 : Diagramme PWM 


La fréquence fixe avec laquelle nous travaillons est alors de 20kHz afin d'éviter les fréquences audibles par l'Homme.
Dans le cas de notre test sur NUCLEO, nous avons configuré un timer via l'interface ioc sur STL32CubeIDE. La fréquence d'horloge de base de la carte était de 80MHz. 
Nous avons alors ajouté un PSC (prescaler) "4-1" et un rapport de division ARR (auto reload register) de "1000-1" afin d'obtenir une fréquence d'horloge d'étude de 20kHz.


![image]
(https://github.com/ETheoParis/ProjetDroneENSEA2023/blob/main/Images/PWM_Config1.png)


![image]
(https://github.com/ETheoParis/ProjetDroneENSEA2023/blob/main/Images/PWM_Config.png)


Figure 6 & 7 : Configuration Timer pour PWM 


D'ailleurs, en ce qui concerne STM32CubeIDE, il faut penser à générer automatiquement les fichiers de code .c et .h implémentés par STM lors de l'utilisation d'un port GPIO quelconque ou bien d'un timer comme c'est le cas actuellement.
(XXX.ioc -> Project Manager -> Code Generator -> Generate peripheral initialization as a pair of '.c/.h' files per peripheral)

En ce qui concerne le fonctionnement, on doit alors déterminer une valeur de comparaison CCR afin d'avoir le rapport cyclique souhaitée. 
Dans le cas de notre code, nous avons testé avec sortie sur l'oscilloscope la PWM pour différentes valeurs de CCR choisie (200, 400, 800).


![image]
(https://github.com/ETheoParis/ProjetDroneENSEA2023/blob/main/Images/PWM_Oscilloscope.png)

Figure 8 : Test PWM sur oscilloscope


La fonction calculCCR permet de faire le lien entre une tension voulue et la PWM. Son résultat serait utilisé dans la fonction __HAL_TIM_SET_COMPARE pour changer la valeurs de la PWM.
La fonction CalculCCR n'a pas pu être vérifiée et optimisée avec les caractéristiques des moteurs (notamment la constance de couple Kc propres à nos moteurs) dans le cas de notre drone puisqu'on a eu un problème hardware sur le PCB qui a empêché les tests. Toutefois, la PWM était effectivement fonctionnel avec affichage sur l'oscilloscope. Nous aurions encore eu à optmiser le choix de CCR afin d'être bien compris dans la plage de fonctionnement des moteurs (en terme de tensions/vitesse de rotation acceptées). Cela aurait pu se faire en adoptant un ordre croissant de CCR afin d'éviter d'endommager les moteurs.



2. MPU6050

Pour contrôler la trajectoire du drone et le stabiliser, nous avons besoin d'un gyroscope et d'un accéléromètre qui permet d'obtenir des valeurs de positions et d'angle après traitement. On a donc utilisé une centrale inertielle qui comprend les deux : le MPU6050.
Cette centrale inertielle communique en bus I2C avec le microprocesseur et transmet les données via UART. On définit les ports de transmissions directement sur l'ioc, comme avec la PWM. On a donc également pu se reposer sur les bibliothèques HAL et UART déjà intégrée et propres à STM32.

Pour la récupération des données de la centrale inertielle on utilise HAL_TIM_PeriodElapsedCallback pour échantillonner la récupération des données à la fréquence du timer. Les données sont lues par HAL_I2C_Mem_Read puis enregistrées dans Rec_Data et recopier dans x, y, z. HAL_UART_Transmit permet de tester le fonctionnement du MPU en récupérant les données via une interface d'affichage tel que Putty sur Windows.

![image]
(https://github.com/ETheoParis/ProjetDroneENSEA2023/blob/main/Images/Putty.png)

Figure 9 : Affichage des valeurs d'accélération et de vitesse angulaire obtenues de la centrale inertielle sur Putty.

Toutefois, en ce qui concerne les valeurs, on observe une variation en l'absence même de mouvement. Cela est problématique par rapport au fait que l'on intègre 2 fois pour obtenir la position, on aurait dans ce cas beaucoup trop d'incertitudes et de variations par rapport à la réalité au fur et à mesure que le drone vole et se déplace. 
Il faut donc travailler sur l'échelle de précision du capteur mais nous n'avons pas pu améliorer ce point-ci par manque de temps. Nous aurions également pu filtrer les valeurs et ne garder que celles qui étaient pertinentes.

3. Fonctions intermédiaires


Nous avons également crée des fonctions intermédiaires qu'on aurait été appelé à utiliser dans le cas du déplacement de drone, toutefois, comme nous étions assez occupé par l'asservissement et l'optimisation des autres parties, nous n'avons pas pu aboutir à un stade où nous utilisions ces fonctions.

int calculVitesse1D(int acceleration, int vitesseActuelle, int pas);
void primitive(VECTEUR* derivee, VECTEUR* constante,VECTEUR* primitive, int pas);
void calculVitesse(VECTEUR* acceleration,VECTEUR* vitesseActuelle,VECTEUR* nouvelleVitesse, int pas);
void calculPosition(VECTEUR* vitesse,VECTEUR* positionActuelle,VECTEUR* nouvellePosition,int pas);
int calculCourantMoteur(int reg);
void recopie(VECTEUR * nouveau, VECTEUR * ancien);


4. Optimisation

Pour éviter que le drone ne se pose trop violemment/rapidement, ce qui aurait endommagé les composants, nous aurions pu mesurer et vérifier la variation de résistance vis-à-vis de la rotation des hélices de chaque moteur. Une résistance plus faible aurait témoigné du fait qu'il y a une réaction normale de pousée vis-à-vis du sol et donc cela aurait signifié une proximité plus importante avec le sol.

La fonction calculCourantMoteur utilise la tension au borne de la résistance Rshunt pour calculer le courant dans le moteur. Son résultat devait servir à mesurer la distance avec le sol. Bien que nous avons bien ajouté une résistance pour cette optimisation, nous n'avons malheureusement pas pu l'implémenter et la tester en plus du cahier des charges initial par manque de temps et contraintes techniques.

_______________________________________________________________________

En terme d'optimisation, on aurait également pu améliorer le code et diminuer son empreinte en terme de ressources inutiles, notamment dans le call de fonctions bien qu'on travaille déjà en C, langage avec une empreinte assez faible.
Le code aurait également pu être amélioré dans son agencement si nous avions réglé le problème d'un MakeFile affecté.




_______________________________________________________________________
_____________________________________________________________________________________


QUESTIONS OBJECTIFS DEVELOPPEMENT DURABLE:
_____________________________________________________________________________________________________________________________________
=> Quelle réflexion avez-vous mené au cours de ce projet autour de la limitation de la consommation d'énergie ?

Notre drone a été modélisé tout en prenant en compte la limitation de la consommation d'énergie. Les critères pris en compte sont :

- Le choix des composants (développé dans la question suivante) qui doit favoriser l'économie d'énergie. (batterie avec bonne capacité et poids raisonnable)

- La conception du drone (favorisation des matériaux légers pour la structure=> réduction du poids total=> travail plus efficace du moteur et aérodynamique du drone étudiée et donc une autonomie accrûe -> Apporte de nouvelles fonctionnalités qui n'étaient pas possibles)

- Usage de technologies avancées (centrale inertielle qui regroupe à la fois un accéléromètre mais aussi un gyroscope. Nous avons donc l'échange de toutes les données externes via seulement une interface I2C et évite de multiplier le nombre de composants sur le PCB qui alourdi le drone et donc augmente la consommation d'énergie et code avec un langage de bas niveau, C, donc à plutôt faible empreinte carbone).


_____________________________________________________________________________________________________________________________________
=>Expliquer les critères de choix des composants de votre projet (critères environnementaux, de disponibilité, d'emprise spatiale, autres).

Le choix des composants est primordial lors de la réalisation d'un projet. Il existe plusieurs critères à prendre en considération:

-Critères environnementaux : Il faut effectivement privilégier le fait d'utiliser le moins de composants possibles sur notre PCB et sinon utiliser ceux qui présente une efficience importante en terme de consommation.

-Critères de disponibilité : Il est nécessaire de privilégier les composants des fournisseurs les plus fiables (Farnell/RS/Mouser/Digikey/Gotronic...). Chez ces derniers, le choix de matériel est largement plus important et des datasheets des composants y sont proposées.

-Critères d'emprise spatiale : (taille et poids : les composants trop lourds peuvent avoir un impact négatif sur les caractéristiques de vol du drone)

On peut également prendre en compte les critères suivants : le coût/les performances et la compatibilité avec d'autres composants du système. 


Concentrons-nous désormais sur chaque composant : 
- Batterie : Nous avons choisi une batterie de capacité 3,7 Wh avec une masse = 30g afin de respecter les critères d'emprise spatiale.La capacité a été choisie afin de permettre le respect du cahier des charges (vol sur 10m avec montée et descente) sans trop impacter l'autonomie (puisque la charge influe sur la vitesse de rotation des hélices pour maintenir le drone en vol).

- Régulateur de tension (17395xx36): Notre choix de composant présente une efficité maximale de 97%. Cela est bien plus pertinent dans le cas d'un drone avec un accumulateur de faible capacité qu'un régulateur linéaire/LDO qui présente une efficacité maximale moindre.

D'ailleurs, la différence d'efficacité entre un régulateur linéaire et un régulateur à découpage s'explique par leur fonctionnement différent :
Les régulateurs linéaires, tels que les régulateurs de type LDO (Low Drop-Out), fonctionnent en utilisant une configuration de transistors pour réguler la tension de sortie. Ils offrent une sortie stable et régulée, mais la différence de tension entre l'entrée et la sortie (la "chute de tension" ou "drop-out") entraîne une dissipation de puissance importante sous forme de chaleur.  (R*I^2) Cela signifie que les régulateurs linéaires ont une efficacité relativement faible, surtout lorsque la différence de tension entre l'entrée et la sortie est élevée. 

En revanche, les régulateurs à découpage fonctionnent en commutant rapidement entre un état actif et un état inactif pour maintenir une tension de sortie régulée. Ils utilisent des inductances et des condensateurs pour stocker et transférer l'énergie de manière efficace. Les régulateurs à découpage sont capables de convertir l'énergie de manière beaucoup plus efficace que les régulateurs linéaires, car ils minimisent les pertes de puissance sous forme de chaleur. Cela se traduit par une meilleure efficacité énergétique et une dissipation de chaleur réduite.


- Moteur: Les critères pris en compte sont principalement la consommation, la taille, la puissance délivrée, le poids et la vitesse (rpm(tr/min) = constante de vélocité * tension. Le rpm va influencer sur la stabilité du vol. Plus celui-ci est faible, plus le vol sera stable). Notre choix s'est porté sur Moteurs Brossés Axe 1.0mm pour Quadricoptère Tiny 8X RC.

- Hélices: Nous prenons en considération leurs longueurs, leurs pas ainsi que leurs compositions (matériaux).

- Châssis: Nous utilisons un châssis qui est fait en PLA, l'acide polylactique qui est en plastique biodégradable (sous certaines conditions) et recyclable par extrudeuse (le plus simple et moins couteux) ou bien par dépolymérisation et repolymérisation. Il s'agit d'un matériau à faible empreinte carbone, notamment dans le cas d'un prototypage comme on est ammené à faire, il s'agit d'une bonne solution logistique et environnemental. 
_____________________________________________________________________________________________________________________________________
=> Sources :

-Datasheets des composants 
-https://www.pilgrim-technology.com/drones-et-environnement/

