#ifndef LABYRINTE_HPP
#define LABYRINTE_HPP

#include <string>



struct Matrices {
    int** matrice1;  // Pointeur vers un tableau 2D d'entiers
    char** matrice2;  // Pointeur vers un tableau 2D de caractères
    int lignes;
    int colonnes;
};

void afficherDebut();
void allouerMatrices(int lignes, int colonnes, Matrices& matrices);
void libererMatrices(Matrices& matrices);
bool estDeuxNombresSupUn(const std::string& s, Matrices& matrices);
void traiterLigneX(int x, ResultatLecture& resultat, Matrices& matrices);


#endif 