# tp1_inf3105_ete2023


## Description

Il s'agit d'un logiciel qui effectuera le filtrage d'un signal. Ce logiciel recevra les informations relatives au filtre ainsi que le nom d'un fichier contenant le signal à filtrer. Les résultats seront ensuite enregistrés dans un fichier choisi par l'utilisateur.

La section suivante présente une description du projet, tandis que les instructions concernant la soumission et la correction sont fournies par la suite.

Ce travail est accompli pour le cours de Structures de données et algorithmes, INF3105,
pour l'enseignant Bruno Malenfant, a l'Université du Québec à Montréal.

## Auteur

© 2023 Tous droits réservés, Kevin Da Silva (DASK30049905)

## Fonctionnement

******
Expliquez d'abord en mots comment faire fonctionner le projet (imaginez que la
personne qui l'utilisera ne connaît pas C, ne connaît pas le projet et souhaite
seulement saisir une série de commandes pour l'exécuter). En particulier,
indiquez les commandes qui doivent être entrées pour la compilation et
l'exécution.
*******

## Tests

Le lancement de la suite de tests automatiser ce fait avec la commande
`make test` dans le terminal.

Les resultat opbtenue sont les suivantes:

```sh
$ make test
$ bats check.bats
  
  x tests, y failures
```

[]()

## Dépendances

* [GCC]().
* [Bats](https://github.com/bats-core/bats-core).
* [Make](https://linuxhint.com/install-make-ubuntu/)
* []()

## Références

* [Markdown](https://learn.microsoft.com/en-us/contribute/markdown-reference)
* [Gitignore librairie complete](https://github.com/github/gitignore)
* []().
* []().
* []().

## État du projet

* [ ] Le dépôt contient au moins un fichier `.gitignore`.
* [ ] Le fichier `Makefile` permet de compiler le projet lorsqu'on entre
  `make`. Il supporte les cibles `test` et `clean`.
* [ ] Le nombre de tests qui réussissent/échouent avec la `make test` est
  indiqué quelque part dans le fichier `README.md`.
* [ ] Les sections incomplètes de ce fichier (`README.md`) ont été complétées.
* [ ] L'en-tête du fichier est documentée.
* [ ] L'en-tête des déclarations des fonctions est documentée (*docstring*).
* [ ] `README.md` ne depasse pas 120 caractere par ligne.
* [ ] Aucun `goto`.
* [ ] Fonction qui ne depasse pas 10 lignes.
* [ ] Un seul `return` par fonction.
* [ ] Contient uniquement les librairie standard de C++.
* [ ] Contient la librairie cmath.
* [ ] Indentation du code avec des Espaces.
* [ ] Les commentaires:
    * [ ] Present dans l'entetede chaque classe et fonction.
    * [ ] Une ligne contient sois le commentaire sois le code pas les deux.
    * [ ] pour plus de detail voir pdf tp1.
* [ ] Nom significatif des variables.
* [ ] Une ligne ne depasse pas 120 caracteres.

Date de remise 14 juin 2023.
- Fonctionnalite [10 pts]
- Structure [3 pts]
- Lisibilite [2 pts]