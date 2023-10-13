/**
 * @file Individu.h
 * @author ELDUAYEN Néo
 * @brief 
 * @version 0.1
 * @date 2023-10-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef INDIVIDU_H
#define INDIVIDU_H

using namespace std;

#include "Voiture.h" // Utilisée ci-dessous
#include <iostream>

class Voiture; /* Annonce une définition ultérieure de Voiture
                   permet de faire référence aux membres de Voiture dans la classe Individu */

/**
 * @brief Cette classe définit un Individu à partir de son nom et de son prénom
 * 
 * @details Individu
 * 
 * La voiture conduite par l'individu est définie par un pointeur vers un objet Voiture 
 * 
 * @warning un Individu conduit au plus une Voiture
 */
class Individu
{
    // ATTRIBUTS
  public:
    /**
     * @brief 
     * 
     */
    string nom;         // Le nom de l'individu
    /**
     * @brief 
     * 
     */
    string prenom;      // Le prénom de l'individu
    /**
     * @brief 
     * 
     */
    Voiture *maVoiture; // Lien avec la voiture de l'individu

    // MÉTHODES
  public:
    /**
     * @brief Cela construit un objet Individu à partir son nom (1er paramètre) et son prénom (2ème paramètre)
     * 
     */
    Individu(string = "", string = "");
    /**
     * @brief Détruit un objet Individu
     * 
     * @return * destructeur 
     */
    ~Individu();

    // Méthodes usuelles : toString
    /**
     * @brief Affiche l'identité de l'Individu
     * 
     * @return Une chaine de caractère sous la forme "nom, prénom"
     *
     * @bug Un espace entre le nom et le prénom
     * 
     * @todo Ajouter choix entre nom et prénom ou prénom et nom
     */
    string toString();     
    string toStringAndLink(); // Affiche l'identité de l'individu et de sa voiture s'il en a une

    // Méthodes spécifiques
    void majMaVoiture(Voiture* voiture);
    /**
     * @brief Définit la Voiture conduite par l'individu
     * 
     * @param voiture un pointeur vers l'objet Voiture conduit par l'individu
     */
    void setMaVoiture(Voiture* voiture);
    void supprimerLien();
};

#endif // INDIVIDU_H