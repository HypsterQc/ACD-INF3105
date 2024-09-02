#include <iostream>
#include "../include/gestion.hpp"
#include "../include/labyrinte.hpp"

int main(int argc, char* argv[]) {
    
    afficherDebut();

    afficherArguments(argc, argv);

    if(argc < 2) {
        std::cout << "Veuillez fournir le nom du fichier en argument." << std::endl;
        return 1;
    }
    
    std::string nomFichier = argv[1];
    
    ResultatLecture resultat = lireFichier(nomFichier);
    
    if (resultat.contenu.empty()) {
        std::cerr << "Impossible d'ouvrir le fichier " << argv[1] << std::endl;
        return 1;
    }

    Matrices matrices;
    allouerMatrices(resultat.nombreLignes, resultat.nombreLignes, matrices);


    // Traite chaque ligne
    for (int i = 0; i < resultat.nombreLignes; ++i) {
        traiterLigneX(i, resultat, matrices);
    }

    libererMatrices(matrices);

    return 0;
}
