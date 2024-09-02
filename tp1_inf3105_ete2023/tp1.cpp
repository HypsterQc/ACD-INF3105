#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <algorithm>
#include <stdexcept>

struct MyStructure {
    double doubleArray1[5];
    double doubleArray2[5];
    char optL;
    char optH;
    char optF;
    char optA;
    char optI;
    int valeurF;
    int valeurA;
    double valeurL;
    double valeurH;
};

enum error {
    OK                          = 0,
    ERREUR_ARGUMENTS_INVALIDES  = -1,
    ERREUR_DONNEES_INVALIDES    = -2,
    ERREUR_MOT_TROP_LONG        = -3,
    ERREUR_LETTRE_INTERDITE     = -4,
    ERREUR_MOT_NON_EQUILIBRE    = -5
};

void error_msg(enum error numError){
    switch (numError){
    case ERREUR_ARGUMENTS_INVALIDES:
        std::cerr << "argument invalide" << std::endl;
        break;
    case ERREUR_DONNEES_INVALIDES:
        std::cerr << "donnees invalides" << std::endl;
        break;
    case ERREUR_MOT_TROP_LONG:
        std::cerr << "mot trop long" << std::endl;
        break;
    case ERREUR_LETTRE_INTERDITE:
        std::cerr << "lettre interdite" << std::endl;
        break;
    case ERREUR_MOT_NON_EQUILIBRE:
        std::cerr << "mot non equilibre" << std::endl;
        break;
    default:
        std::cerr << "erreur inconnue" << std::endl;
        break;
    }
    exit(numError);
}

int convertToInt(double number) {
  if (number != static_cast<int>(number)) {
    error_msg(ERREUR_DONNEES_INVALIDES);
  }
  return static_cast<int>(number);
}

double convertToDouble(const std::string& str) {
    try {
        return std::stod(str);
    } catch (const std::exception&) {
        error_msg(ERREUR_DONNEES_INVALIDES);
    }
}

double verifyNumber(const std::string& str) {
  double number;
  std::istringstream iss(str);
  if (!(iss >> number) || !iss.eof()) {
    throw std::invalid_argument("La chaîne n'est pas un nombre valide.");
  }
  return number;
}

/*
    pour agv[1] et agv[2] 
    verifie s'il sagis de fichier qui termine par .txt
    verifie que le fichier existe
*/
void valid_entree_sortie(const std::string& filename) {
    std::cout << "Fonction valid_entree appelée." << std::endl;
    // Code de traitement de l'entrée
}

void analyse_entree() {
    std::cout << "Fonction analyse_entree appelée." << std::endl;
    // Code de traitement de l'entrée
}

void renvois_sortie() {
    std::cout << "Fonction renvois_sortie appelée." << std::endl;
    // Code de génération de la sortie
}

void valid_option(const std::string& arg, const std::string& arg2) {
    std::cout << "Fonction valid_option appelée." << std::endl;
    //convertir en minuscule
    if(arg.length() != 2 || arg[0] != '-'){
        error_msg(ERREUR_ARGUMENTS_INVALIDES);
    } else if(arg[1] == 'l'){
        valid_optionL(arg2);
    } else if(arg[1] == 'h'){
        valid_optionH(arg2);
    } else if(arg[1] == 'f'){
        valid_optionF(arg2);
    } else if(arg[1] == 'a'){
        valid_optionA(arg2);
    } else if(arg[1] == 'i'){
        valid_optionI();
    } else {
        error_msg(ERREUR_ARGUMENTS_INVALIDES);
    }
}

void comparateur_option() {
    std::cout << "Fonction comparateur_option appelée." << std::endl;
    // compare les option entree dans la structure dans le but de pas avoir de doublons
}

/* 
    pour agv[3] || agv[3] && agv[5]
    verifie qu'il sagis de option -l ou -h
    verifie quil y a au moins un de ces 2 options
    verifie que agv[4] agv[6] est bien une variable de type double
    verifie que cette variable est > 0
*/
void valid_optionLH(const std::string& arg, const std::string& arg2) {
    std::cout << "Fonction valid_option appelée." << std::endl;
    //convertir en minuscule
    if(arg.length() != 2 || arg[0] != '-'){
        error_msg(ERREUR_ARGUMENTS_INVALIDES);
    } else if(arg[1] == 'l'){
        valid_optionL(arg2);
    } else if(arg[1] == 'h'){
        valid_optionH(arg2);
    } else {
        error_msg(ERREUR_ARGUMENTS_INVALIDES);
    }
}

void valid_optionL(const std::string& arg) {
    std::cout << "Fonction valid_optionL appelée." << std::endl;
    double nombre = -1;
    nombre = verifyNumber(arg);
    if(nombre > 0){

    } else{
        error_msg(ERREUR_ARGUMENTS_INVALIDES);
    }

}

void valid_optionH(const std::string& arg) {
    std::cout << "Fonction valid_optionH appelée." << std::endl;
    double nombre = -1;
    nombre = verifyNumber(arg);
    if(nombre > 0){

    } else{
        error_msg(ERREUR_ARGUMENTS_INVALIDES);
    }
}

/*
    accompagner d'une valeur de type int > 0 
    si aucun -f alorss par default = 44100
*/
void valid_optionF(const std::string& arg) {
    std::cout << "Fonction valid_optionA appelée." << std::endl;
    int nombre = -1;
    nombre = convertToInt(verifyNumber(arg));
    if(nombre <= 0){
        error_msg(ERREUR_ARGUMENTS_INVALIDES);
    }
    //envois dans struct
}

/*
    accompagner d'une valeur de type int > 0 
    si aucun -a alorss par default = 8000
*/
void valid_optionA(const std::string& arg) {
    std::cout << "Fonction valid_optionA appelée." << std::endl;
    int nombre = -1;
    nombre = convertToInt(verifyNumber(arg));
    if(nombre <= 0){
        error_msg(ERREUR_ARGUMENTS_INVALIDES);
    }
    //envois dans struct
}

/*
    resultat final == une valeur de type int > 0 
    sinon resultat final == type double > 0
*/
void valid_optionI() {
    std::cout << "Fonction valid_optionI appelée." << std::endl;
    // Code pour l'option I
}

void ordre_filtre() {
    std::cout << "Fonction ordre_filtre appelée." << std::endl;
    // Code pour l'option I
}

void coefficient_filtre() {
    std::cout << "Fonction coefficient_filtre appelée." << std::endl;
    // Code pour l'option I
}

void convolution() {
    std::cout << "Fonction optionI appelée." << std::endl;
    // Code pour l'option I
}

int main(int argc, char* argv[]) {
    
    MyStructure myStruct;
    const int maxArguments = 11;
    const int minArguments = 4;

    std::cout << "argc :" << argc << std::endl;

    if(argc == 1){
        //affiche un manuel dutilisation
    } else if(argc > maxArguments || argc < minArguments){
        error_msg(ERREUR_ARGUMENTS_INVALIDES);
    } else {
        valid_entree_sortie(argv[1]);
        valid_entree_sortie(argv[2]);
        valid_optionLH(argv[3], argv[4]);

        for (int i = 5; i < argc; i++) {
            std::cout << "argv " << i << ": " << argv[i] << std::endl;
            valid_option(argv[i], argv[i + 1]);
        }
    }
    
    return OK;
}
