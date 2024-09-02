#ifndef GESTION_HPP
#define GESTION_HPP

#include <fstream>
#include <vector>
#include <cctype>
#include <string>

struct ResultatLecture {
    std::vector<char> contenu;
    int nombreLignes;
};


// Déclaration de la fonction afficherArguments

void afficherArguments(int argc, char* argv[]);
ResultatLecture lireFichier(const std::string& nomFichier);
void afficherContenu(const std::vector<char>& contenu);

#endif 
