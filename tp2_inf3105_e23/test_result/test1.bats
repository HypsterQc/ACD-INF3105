#!/usr/bin/env bats

@test "Vérifier la sortie du programme" {
    run ./build/TP2  # Remplacez `TP2` par le nom de votre exécutable
    [ "$status" -eq 0 ]
    [ "$output" = "Résultat attendu" ]  # Remplacez "Résultat attendu" par la sortie attendue de votre programme
}

@test "Vérifier la fonctionnalité X" {
    run ./build/TP2 --option X  # Remplacez `TP2` et `--option X` par les valeurs appropriées
    [ "$status" -eq 0 ]
    [ "$output" = "Résultat attendu" ]  # Remplacez "Résultat attendu" par le résultat attendu de la fonctionnalité X
}

# Ajoutez d'autres tests ici en utilisant la même structure

