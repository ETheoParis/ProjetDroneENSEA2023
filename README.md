# ProjetDroneENSEA2023


I. Introduction :

Nous avons choisi de constituer un groupe de 5 personnes pour asservir et concevoir le PCB d'un drone. La structure en impression 3D nous a été fourni, nous nous sommes donc penchés sur la partie électronique et informatique.
Selon le dictionnaire Larousse, un drone "est un petit avion télécommandé utilisé pour des tâches diverses". Dans notre cas, le cahier des charges impose que notre drone puisse décoller, voler de manière rectiligne et atterrir après avoir volé pendant x mètres. 
Pour satisfaire le cahier des charges, nous avons divisé le travail entre les membres du groupe. Jack Du, Nesrine Mathloudi, Cassandre Chandelier et Théo Paris se sont occupés de l’asservissement et du programme informatique pendant Fannie Bichemin a réalisé le PCB et la soudre des composants.

I.1 Organisation :
Nous avons choisi de créer un groupe Messenger pour présenter nos avancées individuelles en dehors des séances de projet. Nous présentions nos recherches et les idées que nous avions pour résoudre les problèmes que nous avons rencontrés. De plus, nous avons réaliser dès la première séance un diagramme de Gantt pour suivre l’évolution de nos tâches respectives et du projet dans sa globalité. 


II. Réalisation :
II.1 Le PCB :
Afin de réaliser le PCB, nous avons commencé par faire le schématic. 
Nous avons tout d’abord rassemblé toutes les datasheets et nous avons dessiné un diagramme pour visualiser le placement des composants ainsi que le nombre de composants nécessaire concevoir le PCB. Par la suite, nous avons regardé les schémas présents dans les datasheets pour connaitre la valeurs des résistances et des condensateurs à placer autour du régulateur et des blocs moteurs. Nous nous sommes également aidés du TD concernant Kicad pour trouver les valeurs des résistances à placer autour de la carte stm32. 
Nous avons donc abouti au schématic suivant :
 


II.2 Les codes informatiques :
II.3 L’asservissement :
Nous avons basé notre premier modèle sur le document State Space System Modelling of a Quad Copter UAV qui donnait une représentation d'état du système. Après avoir mis en forme les équations sur matlab on obtient un problème car le système possède 4 commande pour 6 sortie. On ne peut donc pas découpler les variables du système (cf cours d'assevissement).
Nous avons donc changé de modèle pour se basé sur celui de la simulation quadcopter (par Djemai).



 
 