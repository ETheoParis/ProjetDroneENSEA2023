# ProjetDroneENSEA2023


I. Introduction :

<<<<<<< HEAD
Nous avons choisi de constituer un groupe de 5 personnes pour asservir et concevoir le PCB d'un drone. La structure en impression 3D nous a été fourni, nous nous sommes donc penchés sur la partie électronique et informatique.
Selon le dictionnaire Larousse, un drone "est un petit avion télécommandé utilisé pour des tâches diverses". Dans notre cas, le cahier des charges impose que notre drone puisse décoller, voler de manière rectiligne et atterrir après avoir volé pendant x mètres. 
Pour satisfaire le cahier des charges, nous avons divisé le travail entre les membres du groupe. Jack Du, Nesrine Mathlouthi, Cassandre Chandelier et Théo Paris se sont occupés de l’asservissement et du programme informatique pendant que Fannie Bichemin a réalisé le schématique  et l’éditeur de PCB ainsi que la soudure des composants.

I.1 Organisation :

Nous avons choisi de créer un groupe Messenger pour présenter nos avancées individuelles en dehors des séances de projet. Nous présentions nos recherches et les idées que nous avions pour résoudre les problèmes que nous avons rencontrés. De plus, nous avons réalisé dès la première séance un diagramme de Gantt pour suivre l’évolution de nos tâches respectives et du projet dans sa globalité. 

=======
	Que ce soit pour la surveillance de territoires, l'inspection de bâtiments, la cartographie de zones difficiles d'accès ou encore la livraison de colis, les drones sont devenus indispensables pour de nombreuses entreprises. Il s’agit de petits avions télécommandés utilisés pour des tâches diverses. (Larousse)

	Notre objectif est d’asservir et de concevoir le PCB d’un drone quadcoptère dont la structure nous a été fournie. Nous veillerons à respecter le cahier des charges suivant : 
- Véhicule autonome
- Processeur sur carte-mère
- Pas de contrôle à distance  
- Code embarqué : C sur STM32
- Avancer, décoller
- Avancer "droit" puis de 10 m.
>>>>>>> 8d0cfbdf02e931a0f1080106fc5d263e76398d95

____________________________________________________________________________________________________________________________________________________________

I.1 Répartition des tâches :

	Afin de satisfaire le cahier des charges, nous avons constitué un groupe de cinq personnes formé par : 
- Fannie Bichemin (Hardware)
- Cassandre Chandelier, Jack Du, Nesrine Mathlouthi et Théo Paris (Asservissement, Software, Rapport et Gestion de Projet). 

____________________________________________________________________________________________________________________________________________________________

I.2 Organisation :

	Afin de travailler efficacement, nous avons choisi de créer un groupe Messenger. Ce dernier nous a permis de partager nos avancées individuelles en dehors des séances de projet. Nous présentions nos recherches et idées que nous avions pour résoudre les problèmes que nous avons rencontrés. De plus, nous avons réalisé dès la première séance un diagramme de Gantt pour suivre l’évolution de nos tâches respectives et du projet dans sa globalité. 

____________________________________________________________________________________________________________________________________________________________
____________________________________________________________________________________________________________________________________________________________

II.Hardware

<<<<<<< HEAD
II. Réalisation :

II.1 Le PCB :

Afin de réaliser le PCB, nous avons commencé par faire le schématique. 
Nous avons tout d’abord rassemblé toutes les datasheets et nous avons dessiné un diagramme pour visualiser le placement des composants (Cf figure.1 ) ainsi que le nombre de composants nécessaires pour concevoir le PCB. Par la suite, nous avons regardé les schémas présents dans les datasheets pour connaitre la valeurs des résistances et des condensateurs à placer autour du régulateur et des blocs moteurs. Nous nous sommes également aidés du TD concernant Kicad pour trouver les valeurs des résistances à placer autour de la carte stm32. 


Figure 1: Diagramme qui représente les différents éléments électroniques utilisés 



Nous avons donc abouti au schématique suivant :


	Figure 2.a : Première partie du schématique du projet








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




Figure 2.b : PCB 

Remarques:

Le PCB de gauche est la version qui aurait dû être fabriquée par le procédé “traditionnel”.  
Le PCB de droite est celui qui a été refait par Monsieur Papazouglou car il fallait modifier la manière de placer les composants puisque le PCB a été fabriqué par le système de gravure. 

Les problèmes rencontrés sont: 
Faire en sorte de relier de la manière la plus courte possible les pads entre eux. 








Les choses à retenir:
Multiplier par 4 le “bloc moteur” (transistor, diode, connecteur, résistance, régulateur) et utiliser les coordonnées sur Kicad pour bien aligner les 4 blocs. 
Placer les condensateurs “liés” à la carte STM32 très proches du microprocesseur. 
Ne pas oublier de mettre des vias en plus un peu partout sur le PCB.



Enfin, nous avons soudé les composants sur le PCB : 







Figure 3 : PCB soudé 

Remarque:
La dernière photo permet de montrer que les 3 diodes sont branchées dans le bon sens et qu’elles fonctionnent. 

Les problèmes rencontrés et les choses à retenir sont:
Mettre du flux pour éviter les courts circuits (surtout pour le microprocesseur et les composants très petits et très rapprochés).
Souder en premier les petits composants et en dernier les connecteurs (notamment pour éviter de les brûler).






II.2 Les codes informatiques :
On utilise une structure de vecteurs à 3 coordonnées et des fonctions pour pouvoir primitiver les vecteurs afin d’obtenir la position.
La fonction calculCCR permet de faire le lien entre une tension voulue et la PWM. Son résultat serait utilisé dans la fonction __HAL_TIM_SET_COMPARE pour changer la valeurs de la PWM.
calculCourantMoteur utilise la tension au borne de la résistance Rshunt pour calculer le courant dans le moteur. Son résultat devait servir à mesurer la distance avec le sol.
Pour la récupération des données de la centrale inertielle on utilise HAL_TIM_PeriodElapsedCallback pour échantillonner la récupération des données à la fréquence du timer. Les données sont lues par HAL_I2C_Mem_Read puis enregistrées dans Rec_Data et recopier dans x, y, z. HAL_UART_Transmit permet de tester le fonctionnement du MPU en récupérant les données sur un ordinateur.
II.3 L’asservissement :
II.3.1 Modélisation 1 : Discrétisation-Découplage 

Nous avons basé notre premier modèle sur le document State Space System Modelling of a Quadcopter UAV qui donnait une représentation d'état du système.

Représentation d’état du système 

Après avoir mis en forme les équations sur Matlab et défini les paramètres de l’étude, on détermine les indices relatifs en cherchant CArho-1 ≠ 0. On obtient les résultats suivants : 


On peut alors déterminer l’inverse de la matrice de découplage, on constate un problème car le système possède 4 commandes pour 6 sorties. On ne peut donc pas découpler les variables du système car le système est sous-actionné (cf cours d'asservissement).
Nous avons donc changé de modèle pour se baser sur celui de la simulation quadcopter (par Monsieur Djemai).
(Mettre une image du fichier Matlab) 
=======
II.1 Le PCB :

Afin de réaliser le PCB, nous avons commencé par faire le schématic. 
Nous avons tout d’abord rassemblé toutes les datasheets et nous avons dessiné un diagramme pour visualiser le placement des composants ainsi que le nombre de composants nécessaire concevoir le PCB. Par la suite, nous avons regardé les schémas présents dans les datasheets pour connaitre la valeurs des résistances et des condensateurs à placer autour du régulateur et des blocs moteurs. Nous nous sommes également aidés du TD concernant Kicad pour trouver les valeurs des résistances à placer autour de la carte stm32. 
Nous avons donc abouti au schématic suivant :
 
____________________________________________________________________________________________________________________________________________________________			
II.2 




________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________	

III. Asservissement :	
	
III.1 Recherches préalables : 

Dans un premier temps, nous avons commencé par trouver une documentation adaptée à nos besoins. Il fut difficile de trouver des ressources pertinentes. Finalement, nous nous sommes basés principalement sur les articles suivants :

- Géométrie et commande des drones : https://www.techniques-ingenieur.fr/res/pdf/encyclopedia/42398210-s7818.pdf (1)
- State Space System Modelling of a Quad Copter UAV : https://arxiv.org/pdf/1908.07401.pdf (2)
- Cours d'asservissement de M.Haidar (3)

____________________________________________________________________________________________________________________________________________________________

III. 2 Modélisation : 

On commence par effectuer une représentation d'état du système. On se base sur l'article (2) qui permet de modéliser notre drone de la façon suivante : 

https://imgur.com/mRCuQtt





____________________________________________________________________________________________________________________________________________________________  
III. 3 Version 1 : 




____________________________________________________________________________________________________________________________________________________________
III.4 Version 2 : 


____________________________________________________________________________________________________________________________________________________________
____________________________________________________________________________________________________________________________________________________________
____________________________________________________________________________________________________________________________________________________________
____________________________________________________________________________________________________________________________________________________________
IV. Software :

Nous avons basé notre premier modèle sur le document State Space System Modelling of a Quad Copter UAV qui donnait une représentation d'état du système. Après avoir mis en forme les équations sur matlab on obtient un problème car le système possède 4 commande pour 6 sortie. On ne peut donc pas découpler les variables du système (cf cours d'assevissement).
Nous avons donc changé de modèle pour se basé sur celui de la simulation quadcopter (par Djemai).
>>>>>>> 8d0cfbdf02e931a0f1080106fc5d263e76398d95



 
 

