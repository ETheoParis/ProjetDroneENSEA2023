# ProjetDroneENSEA2023


I. Introduction :

	Que ce soit pour la surveillance de territoires, l'inspection de bâtiments, la cartographie de zones difficiles d'accès ou encore la livraison de colis, les drones sont devenus indispensables pour de nombreuses entreprises. Il s’agit de petits avions télécommandés utilisés pour des tâches diverses. (Larousse)

	Notre objectif est d’asservir et de concevoir le PCB d’un drone quadcoptère dont la structure nous a été fournie. Nous veillerons à respecter le cahier des charges suivant : 
-Véhicule autonome
-Processeur sur carte-mère
-Pas de contrôle à distance  
-Code embarqué : C sur STM32
-Avancer, décoller
-Avancer "droit" puis de 10 m.

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



 
 