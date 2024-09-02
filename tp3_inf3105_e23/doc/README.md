# tp3-inf3105-e23

## Description

Il s'agit d'un programme informatique conçu pour déterminer le chemin le plus court dans un environnement représenté sous forme de matrice. Cette matrice constitue un plateau de jeu dans lequel un joueur peut se déplacer d'une case à une autre. L'un des emplacements de la matrice est spécifié comme étant la "porte", déterminant où le joueur entre et sort de cet univers. L'objectif du joueur est de collecter trois trésors disséminés dans cet univers et de retourner à la porte en empruntant le chemin le plus court possible.

Ce travail est accompli pour le cours de Structures de données et algorithmes, INF3105,
Bruno Malenfant, a l'Universite du Quebec a Montreal.

## Auteur

© 2023 Tous droits réservés, 
    - Thai Minh Danny Nguyen (NGUT71060209)
    - Kevin Da Silva (DASK30049905)

## Fonctionnement

L'objectif du projet consiste à développer un algorithme qui effectuera le calcul des plus courts chemins entre tous les points de l'univers. Cela permettra de déterminer la distance entre la porte et chacun des trésors, ainsi que la distance entre chaque paire de trésors. Ensuite, il examinera toutes les combinaisons possibles pour l'ordre dans lequel les trésors sont parcourus afin de trouver la séquence la plus courte.

Finalement, le programme affichera l'ordre optimal de parcours des trésors, accompagné du coût de chaque parcours individuel ainsi que du coût total du parcours global.

Lors de l'exécution du programme à partir de la ligne de commande (en utilisant argc et argv), celui-ci recevra en entrée un nom de fichier au format '.txt' contenant la description de l'univers. La première ligne du fichier indiquera la taille de l'univers sous forme d'une matrice avec deux valeurs entières : la largeur et la hauteur. Ensuite, chaque ligne du fichier contiendra la description d'une ligne de la matrice représentant l'univers. Enfin, les trois dernières lignes du fichier contiendront les coordonnées des trésors, chaque coordonnée étant composée de deux valeurs : le numéro de colonne et le numéro de ligne.

## Tests

Lancer la suite de tests des fichier CUnit automatiques avec cette commande `make test`.

Voici la liste des testes qui on ete effectuer au CUnit:

```sh
$ make test

...

```

## Dépendances et Références

* [MAKEFILE](https://www.gnu.org/software/make/)
* [MARKDOWN](https://learn.microsoft.com/en-us/contribute/markdown-reference)
* [G++](https://gcc.gnu.org/)
* [Gitignore librairie complete](https://github.com/github/gitignore)

## Étape du projet

* [X] Lecture du TP3.
* [X] Structuration du projet.
* [X] Ecriture du README.md, .gitignore, Makefile
* [X] Brouillon (estimation) des future test bats.
* [X] creation main.
* [ ] gestion du fichier .txt (lecture)
* [ ] fonction des messages d'erreur
* [ ] creation des 2 matrices (univers & tresors)
* [ ] Gestion de l'environnement (N, E, F, R, T [0 || 2], P [seulement 1])
* [ ] Gestion des tresors (pas dans l'eau & 1 (min) a 3 (max))
* [ ] Deplacement dans la matrice (comprehension, cout, mouvement interdit).
* [ ] Creation du Calcul du chemain le plus court.

## Exigences du code source

* [ ] Commentez l’entête de chaque fonction. Ces commentaires doivent contenir la description de la fonction et le rôle de ces paramètres.
* [ ] Une ligne contient soit un commentaire, soit du code, pas les deux.
* [ ] Utilisez des noms d’identificateur significatif.
* [ ] Utilisez le français.
* [ ] Pas de goto.
* [ ] Pour une fonction, Additionnez le nombre de if, for, while, switch et try. Ce nombre ne doit pas dépasser 8.
* [ ] Pour une fonction, Un seul return.
* [ ] Indentez votre code. Assurez-vous que l’indentation est faite avec des espaces.
* [ ] Vous pouvez utiliser les librairies standard de C++.
* [ ] Remettre votre code (votre programme principal, vos modules et un makefile).
* [ ] Remettre le TP par l’entremise de Moodle
* [ ] Remettez votre fichier ‘*.tar.gz’.
* [ ] Date limite le 11 août 2023 à 23:59.

## Barème

- Fonctionnalité (11 pts) : Votre TP doit compiler sans erreur (il peut y avoir des warnings). J’utilise la ligne de compilation suivante : make

- Structure (2 pt) : Il faut avoir plusieurs fonctions et des classes. Construisez un code bien structuré.

- Lisibilité (2 pts) : commentaire, indentation et noms d’identificateur significatif.