#include <iostream>
#include "../include/gestion.hpp"

#ifndef GESTION_CPP
#define GESTION_CPP

void afficherArguments(int argc, char* argv[]) {
    std::cout << "Nombre total d'arguments : " << argc << std::endl;
    std::cout << "Liste des arguments : " << std::endl;
    for (int i = 0; i < argc; ++i) {
        std::cout << "Argument " << i << ": " << argv[i] << std::endl;
    }
}

// Fonction pour lire le fichier
ResultatLecture lireFichier(const std::string& nomFichier) {
    std::ifstream fichier(nomFichier);
    std::vector<char> contenu;
    int nombreLignes = 0;
    bool derniereLigne = false;
    
    if(fichier.is_open()) {
        char c;
        while(fichier.get(c)) {
            contenu.push_back(c);
            if (c == '\n') {
                nombreLignes++;
                if(fichier.peek() == EOF) {
                    derniereLigne = true;
                    std::cout << "Nous sommes à la dernière ligne." << std::endl;
                }
            }
        }
        fichier.close();
    }
    else {
        std::cout << "Erreur lors de l'ouverture du fichier" << std::endl;
    }
    
    if (!derniereLigne && nombreLignes > 0) {
        // Si la dernière ligne ne se termine pas par un retour à la ligne
        std::cout << "Nous sommes à la dernière ligne." << std::endl;
    }
    
    return {contenu, nombreLignes};
}

// Fonction pour afficher le contenu du fichier
void afficherContenu(const std::vector<char>& contenu) {
    std::cout << "Contenu du fichier : " << std::endl;
    for(const char& c : contenu) {
        std::cout << c;
    }
    std::cout << std::endl;
}



#endif 