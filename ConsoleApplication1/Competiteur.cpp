#include "Competiteur.h"

Competiteur::Competiteur(int numero, string nom, string prenom, int classementFIS, int classementWCSL)
    : numeroCompetiteur(numero), nomCompetiteur(nom), prenomCompetiteur(prenom), classementFIS(classementFIS), classementWCSL(classementWCSL) {
}

int Competiteur::getClassementFIS() {
    return classementFIS;
}

int Competiteur::getClassementWCSL() {
    return classementWCSL;
}

string Competiteur::getNom() {
    return nomCompetiteur;
}

string Competiteur::getPrenom() {
    return prenomCompetiteur;
}

int Competiteur::getNumeroCompetiteur() {
    return numeroCompetiteur;
}
