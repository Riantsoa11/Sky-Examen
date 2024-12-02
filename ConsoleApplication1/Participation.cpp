#include "Participation.h"

Participation::Participation() : leCompetiteur(nullptr), numDossard(0), classement(0) {}

Participation::Participation(int numDossard, int classement, Competiteur* competiteur)
    : leCompetiteur(competiteur), numDossard(numDossard), classement(classement) {
}

void Participation::setNumDossard(int num) {
    numDossard = num;
}

int Participation::getNumDossard() {
    return numDossard;
}

Competiteur* Participation::getCompetiteur() {
    return leCompetiteur;
}
