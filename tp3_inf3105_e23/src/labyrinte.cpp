#include <iostream>
#include "../include/gestion.hpp"
#include "../include/labyrinte.hpp"

#ifndef LABYRINTE_CPP
#define LABYRINTE_CPP

// Fonction pour afficher le début du programme
void afficherDebut() {
    std::cout << "Début programme" << std::endl;
}

void allouerMatrices(int lignes, int colonnes, Matrices& matrices) {
    matrices.lignes = lignes;
    matrices.colonnes = colonnes;

    matrices.matrice1 = new int*[lignes];
    matrices.matrice2 = new char*[lignes];

    for (int i = 0; i < lignes; i++) {
        matrices.matrice1[i] = new int[colonnes]();
        matrices.matrice2[i] = new char[colonnes]();
        for (int j = 0; j < colonnes; j++) {
            matrices.matrice1[i][j] = 0;
            matrices.matrice2[i][j] = '0';
        }
    }
}

void libererMatrices(Matrices& matrices) {
    for (int i = 0; i < matrices.lignes; i++) {
        delete[] matrices.matrice1[i];
        delete[] matrices.matrice2[i];
    }

    delete[] matrices.matrice1;
    delete[] matrices.matrice2;
}


// Fonction pour vérifier si une ligne contient exactement deux nombres
bool estDeuxNombresSupUn(const std::string& s, Matrices& matrices) {
    std::string nombre1, nombre2;
    bool espaceRencontre = false;

    for (const char& c : s) {
        if (std::isspace(c)) {
            espaceRencontre = true;
        } else if (std::isdigit(c)) {
            if (espaceRencontre) {
                nombre2 += c;
            } else {
                nombre1 += c;
            }
        } else {
            return false;
        }
    }

    // Convertit les chaînes en int
    int num1, num2;
    try {
        num1 = std::stoi(nombre1);
        num2 = std::stoi(nombre2);
    } catch (std::invalid_argument& e) {
        return false;  // Renvoie false si la conversion échoue
    }

    allouerMatrices(num1, num2, matrices);

    // Affiche les nombres
    std::cout << "Nombre 1: " << num1 << std::endl;
    std::cout << "Nombre 2: " << num2 << std::endl;

    // Vérifie que les deux nombres sont plus grands que 1
    return num1 > 1 && num2 > 1;
}


// Fonction pour traiter une ligne spécifique
void traiterLigneX(int x, ResultatLecture& resultat, Matrices& matrices) {
    std::string ligne;
    int compteurLignes = 0;
    for (const char& c : resultat.contenu) {
        if (c == '\n') {
            compteurLignes++;
            if (compteurLignes > x) {
                break;
            }
            ligne.clear();
        } else if (compteurLignes == x) {
            ligne += c;
        }
    }

    if (compteurLignes < x || ligne.empty()) {
        std::cout << "La ligne " << x << " est vide ou n'existe pas." << std::endl;
        return;
    }

    std::cout << "Contenu de la ligne " << x << ": " << ligne << std::endl;
    
    if (x == 0) {
        if (!estDeuxNombresSupUn(ligne, matrices)) {
            std::cout << "La première ligne ne contient pas deux nombres valides supérieurs à 1." << std::endl;
        }
    }

    if (x > resultat.nombreLignes - 3) {
        std::cout << "Patate" << std::endl;
    }
}


#endif 