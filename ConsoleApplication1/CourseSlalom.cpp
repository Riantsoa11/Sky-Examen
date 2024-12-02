#include "CourseSlalom.h"
#include <cstdlib>
#include <iostream>

CourseSlalom::CourseSlalom(string nom, string date, Participation* participants)
    : Course(nom, date, participants, 0) {
    nbParticipants = 0;
    for (int i = 0; i < 100; i++) { // Assume a maximum size of 100 for participants array
        if (participants[i].getCompetiteur() != nullptr) {
            nbParticipants++;
        }
        else {
            break;
        }
    }
}


void CourseSlalom::attribuerDossards(int borneInf, int borneSup) {
    bool used[100] = { false };
    for (int i = borneInf; i <= borneSup; i++) {
        int randomIndex;
        do {
            randomIndex = rand() % nbParticipants;
        } while (used[randomIndex]);
        used[randomIndex] = true;
        lesParticipants[randomIndex].setNumDossard(i);
    }
}

void CourseSlalom::traitementDossards() {
    // Étape 1 : Classer les participants par WCSL et FIS
    classerLesParticipants();
    std::cout << "Participants classés par WCSL et FIS." << std::endl;

    // Étape 2 : Attribuer les dossards aux participants
    attribuerDossards(1, 7);  // Dossards pour les 7 premiers
    attribuerDossards(8, 15); // Dossards pour les suivants
    for (int i = 16; i <= nbParticipants; i++) {
        lesParticipants[i - 1].setNumDossard(i); // Reste des participants
    }

    // Étape 3 : Trier les participants par dossard
    for (int i = 0; i < nbParticipants - 1; i++) {
        for (int j = i + 1; j < nbParticipants; j++) {
            if (lesParticipants[i].getNumDossard() > lesParticipants[j].getNumDossard()) {
                Participation temp = lesParticipants[i];
                lesParticipants[i] = lesParticipants[j];
                lesParticipants[j] = temp;
            }
        }
    }

    std::cout << "Participants triés par dossard." << std::endl;
}




