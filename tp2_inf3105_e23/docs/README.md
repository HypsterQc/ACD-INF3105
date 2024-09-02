# TP 2: "COMPARAISON DE PLUSIEURS TEXTES"

## Description

Il s'agit d'un projet de logiciel C++ conçu pour la comparaison de plusieurs textes. L'utilisateur fournit un corpus de texte et souhaite identifier les similitudes ou les différences entre les textes. Cette recherche prend en compte à la fois le nombre d'occurrences d'un mot et son importance. Le texte suivant est organisé en cinq sections :

- La première section décrit les entrées du logiciel.
- La deuxième section explique les calculs que le logiciel doit effectuer.
- La troisième section détaille les sorties du logiciel.
- La quatrième section présente les directives.
- Enfin, la cinquième section propose les instructions à suivre.

## Auteur

© 2023 Tous droits réservés, 
    - Kevin Da Silva (DASK30049905)
    - Thai Minh Danny Nguyen (NGUT71060209)

## Structure des fichiers et raisonnement

Le code fourni est composé de 18 fichiers:

Des classes pour décrire un document XML :

- AttributNonDefinieXML (hpp et cpp) : une exception.

- DocumentXML (hpp et cpp) : la base du document XML. Une structure d’arbre généralisé est utilisée.

- NoeudXML (hpp et cpp) : les nœuds qui composent l’arbre généralisé.
    - ElementXML (hpp et cpp) : un type de nœud représentant les éléments (tag) XML.
    - TexteXML (hpp et cpp) : un type de nœud représentant le texte entre les éléments XML.

Des classes pour représenter la structure de base:

- Histoire (hpp et cpp) : décris une histoire (dans le code, le mot « histoire » est utilisé plutôt que le mot « texte » pour décrire les textes). Cette structure contient le titre de l’histoire et les phrases qui composent l’histoire. Un itérateur permet de parcourir les phrases de l’histoire.

- Phrase (hpp et cpp) : décris une phrase de l’histoire. Elle contient le texte original et les mots qui composent la phrase. Un itérateur permet de parcourir les mots (string) de la phrase. Les mots sont déjà en minuscule.

* Ces fichiers contiennent la structure pour faire les calculs.

- Lecteur (hpp et cpp) : contient le lecteur de fichier XML pour construire la structure XML contenant l’information d’un fichier. Un automate simple est utilisé comme algorithme de base avec des pointeurs de fonction (callback).

- TP2.cpp : contient la fonction main. En ce moment, la fonction main contient du code montrant comment utiliser les structures de base (Histoire et Phrase). Pour votre projet, vous devez, entre autres, remplacer ce code par votre code.
    - Ce fichier contient aussi la fonction lireDocuments. Cette fonction lit le corpus et construit la structure de base pour le logiciel. Elle est appelée par la première ligne du programme principal. Elle retourne un vecteur d’histoires. Votre code doit utiliser ce vecteur pour faire l’analyse. Cela vous demande d’être capable d’utiliser les méthodes des classes Histoire et Phrase.

- Makefile : pour compiler le tous.
    - make : compile le projet, l’exécutable portera le nom de TP2.
    - make clean : nettoie le répertoire.
    - make archive : construit une archive pour la remise.

## Fonctionnement

Le logiciel fonctionne de la manière suivante :
L'une des entrées essentielles du logiciel est un corpus de texte. Ce corpus sera divisé en plusieurs fichiers, comprenant les textes individuels, ainsi qu'un fichier supplémentaire décrivant le corpus dans son ensemble. Lorsque le programme est exécuté, il demande le nom du fichier contenant la description du corpus via la ligne de commande. Un exemple similaire est présent sur Moodle, où le fichier "listeDocument.xml" contient la description du corpus, tandis que les fichiers "janvier1930.xml" à "avril1930.xml" contiennent les textes individuels. Pour le reste de cette description, nous utiliserons "𝐷𝑖" pour représenter le "𝑖 𝑖è𝑚𝑒" texte. Tous ces fichiers sont au format "xml". Le code nécessaire pour lire ces fichiers est fourni.

Concernant le calcul, voici les trois étapes à suivre.

### Premier calcul

Pour chaque texte "𝑫𝒊", le programme calcule le "𝐭𝐟(𝑫𝒊, 𝒎)" pour chaque mot "𝒎" contenu dans le texte. Ainsi, il y aura une valeur "𝐭𝐟" associée à chaque mot dans chaque texte. Pour effectuer ce calcul, le programme utilise un arbre AVL qui servira de structure associative, avec les mots comme clés et le nombre d'occurrences de chaque mot comme définition. Par conséquent, chaque texte aura son propre arbre AVL. Le "𝐭𝐟" (fréquence du terme) d'un mot dans un texte est simplement le nombre de fois que ce mot apparaît dans ce texte spécifique. Par conséquent, un mot aura une "𝐭𝐟" différente pour chaque texte.

En outre, le programme calcule également l'𝐢𝐝𝐟(𝒎) pour chaque mot. Il y a un seul 𝐢𝐝𝐟 pour l'ensemble des textes. L'𝐢𝐝𝐟 (inverse document frequency) est inversement proportionnel au logarithme du nombre de textes contenant ce mot. Par exemple, si un mot apparaît dans 3 textes sur un total de 26, son 𝐢𝐝𝐟 sera de 𝐥𝐨𝐠𝟐 (𝟐𝟔⁄𝟑). Ainsi, si un mot 𝒎 apparaît dans 𝒙 textes parmi les 𝑵 textes au total, son 𝐢𝐝𝐟(𝒎) sera égal à 𝐥𝐨𝐠𝟐 (𝑵⁄𝒙). Le programme utilise également un arbre AVL pour stocker les résultats de ce calcul.

### Deuxième calcul

Une fois que le programme dispose de la fréquence de chaque mot (tf) pour chaque texte, ainsi que de l'𝐢𝐝𝐟 pour l'ensemble des textes, il est temps d'utiliser ces valeurs pour calculer la similarité entre les textes. La similarité entre deux textes (𝑫𝒊 et 𝑫𝒋) est déterminée par la formule indiquée dans le fichier PDF. Dans la formule pour 𝒑, 𝒎𝒌 prends, tour à tour, tous les mots possibles. Remarquez qu’il est seulement nécessaire de prendre les mots qui sont présents dans l’union des deux textes comparés.


### Production des sorties

Le logiciel place les résultats dans un fichier nommé res.txt. Ce fichier contiendra les résultats de la comparaison entre chaque texte du corpus(𝑺𝒊𝒎(𝑫𝒊 , 𝑫𝒋 )).

## Dépendances et Référence

* [XML](https://www.w3.org/XML/)
* [MAKEFILE](https://www.gnu.org/software/make/)
* [MARKDOWN](https://learn.microsoft.com/en-us/contribute/markdown-reference)
* [G++](https://gcc.gnu.org/)
* [Gitignore librairie complete](https://github.com/github/gitignore)
* [Wikipedia - Arbre AVL](https://fr.wikipedia.org/wiki/Arbre_AVL)
* [Universiter de Ottawa - Arbre AVL](https://www.site.uottawa.ca/~laganier/csi2510/CSI2510AVL.pdf)

## État du projet

* [ ] les modification et ajout de code sont present que dans les fichier suivant : (Histoire (hpp et cpp), Phrase (hpp et cpp), TP2.cpp et Makefile)
* [ ] Le TP est à faire seul ou en équipe de deux (maximum).
* [ ] Pas de goto.
* [ ] Pour une fonction : Additionnez le nombre de if, for, while, switch et try. Ce nombre ne doit pas dépasser 9.
* [ ] Pour une fonction : Un seul return.
* [ ] Vous DEVEZ avoir une classe pour les arbres AVL et l’utiliser pour le calcul des 𝑡𝑓, 𝑖𝑑𝑓. ATTENTION !!! : si vous utilisez la classe map de la stl c++ pour replacer les arbres AVL, dans ce cas, votre note ne dépassera pas 16/20.
* [ ] Commentez l’entête de chaque classe et fonction que vous rajouter ou modifier.
* [ ] Une ligne contient soit un commentaire, soit du code, pas les deux.
* [ ] Utilisez des noms d’identificateur significatif.
* [ ] Une ligne de commentaire ne devrait pas dépasser 80 caractères.
* [ ] La première ligne d’un commentaire doit contenir une description courte (1 phrase) de la fonction ou la classe.
* [ ] Commencez la description avec un verbe.
* [ ] Ensuite, au besoin, une description détaillée de la fonction ou classe va suivre.
* [ ] Si vous avez besoin de mentionner l’objet courant, utilisez le mot ‘this’.
* [ ] Ensuite, placez une ligne vide.
* [ ] Décrivez les paramètres de la fonction.
* [ ] Écrivez les commentaires à la troisième personne.
* [ ] Remettre le TP par l’entremise de Moodle.
* [ ] Dans le répertoire de votre projet, où seulement les fichiers .hpp, .cpp et le makefile sont présent.
* [ ] Vous devez remettre un fichier compressé du projet en utilisent la commande : "make archive". Cela va produire un fichier TP2.tar.gz que vous allez remettre par l’entremise de Moodle.
* [ ] Le TP est à remettre avant le 21 juillet 23:55.

## Barème

- Fonctionnalité (14 pts) : Votre TP doit compiler sans erreur (il peut y avoir des warnings). J’utilise la ligne de compilation suivante sur les serveurs Java de l’université : make.
    - Des tests seront donnés.
- Structures (3 pts) : Il faut avoir plusieurs fonctions. Construisez un code bien structuré. (Voir les directives.)
- Lisibilité (3 pts) : commentaire, indentation et noms d’identificateur significatif. (Voir les directives.)
