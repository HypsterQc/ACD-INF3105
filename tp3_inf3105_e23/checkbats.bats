tests_folder=filetxt
prog=executable
help_first_line="Usage: ./executable nom_du_fichier.txt"

# Normal usage

@test "test0 : Aide - Manuel d'utilisation - Sans aucune entree, afficher aide" {
    
    run ./$prog
    [ "$status" -eq 0 ]
    [ "${lines[0]}" = "$help_first_line" ]
}

@test "test1 : msgerr - argument invalide - Accepte que les fichier .txt" {
    
    run ./$prog $tests_folder/test1.txt
    [ "$status" -eq 1 ]
    [ "${lines[0]}" = "msgerr" ]
    [ "${lines[1]}" = "fin du programme" ]
}

@test "test2 : msgerr - Taille de l’univers - deux valeurs entiere plus grande que 1" {
    
    run ./$prog $tests_folder/test2.txt
    [ "$status" -eq 2 ]
    [ "${lines[0]}" = "msgerr" ]
    [ "${lines[1]}" = "fin du programme" ]
}

@test "test3 : msgerr - Porte - une seule porte autoriser " {
    
    run ./$prog $tests_folder/test3.txt
    [ "$status" -eq 3 ]
    [ "${lines[0]}" = "msgerr" ]
    [ "${lines[1]}" = "fin du programme" ]
}

@test "test4 : msgerr - Tresors - contient entre 1 et 3 tresors" {
    
    run ./$prog $tests_folder/test4.txt
    [ "$status" -eq 4 ]
    [ "${lines[0]}" = "msgerr" ]
    [ "${lines[1]}" = "fin du programme" ]
}

@test "test5 : msgerr - Tresors - Un trésor ne peut pas être dans l’eau." {
    
    run ./$prog $tests_folder/test5.txt
    [ "$status" -eq 5 ]
    [ "${lines[0]}" = "msgerr" ]
    [ "${lines[1]}" = "fin du programme" ]
}

@test "test6 : msgerr - matrice - Desssin matrice incorrecte" {
    
    run ./$prog $tests_folder/test6.txt
    [ "$status" -eq 6 ]
    [ "${lines[0]}" = "msgerr" ]
    [ "${lines[1]}" = "fin du programme" ]
}

@test "test7 : msgerr - Teleporte - quantite de teleporte invalide (soit 0  ou 2)" {
    
    run ./$prog $tests_folder/test6.txt
    [ "$status" -eq 7 ]
    [ "${lines[0]}" = "msgerr" ]
    [ "${lines[1]}" = "fin du programme" ]
}

@test "test8 : parametre valide" {
    
    run ./$prog $tests_folder/testx
    [ "$status" -eq 0 ]
    [ "${lines[0]}" = "Porte -> T1 : x" ]
    [ "${lines[1]}" = "T1 -> T2 : x" ]
    [ "${lines[2]}" = "T2 -> Tn : x" ]
    [ "${lines[3]}" = "Tn -> porte : x" ]
    [ "${lines[4]}" = "Total : x" ]
}

@test "test9 : demo valide" {
    
    run ./$prog $tests_folder/demo.txt
    [ "$status" -eq 0 ]
    [ "${lines[0]}" = "Porte -> T1 : 3.8" ]
    [ "${lines[1]}" = "T1 -> T2 : 3.8" ]
    [ "${lines[2]}" = "T2 -> T3 : 6.1" ]
    [ "${lines[3]}" = "T3 -> porte : 2.8" ]
    [ "${lines[4]}" = "Total : 16.5" ]
}