#include "Course.h"
#include <iostream>

Course::Course(string nom, string date, Participation* participants, int nbParticipants)
    : nomCompetition(nom), dateCompetition(date), lesParticipants(participants), nbParticipants(nbParticipants) {
}

void Course::classerLesParticipants() {
    for (int i = 0; i < nbParticipants - 1; i++) {
        for (int j = i + 1; j < nbParticipants; j++) {
            if (lesParticipants[i].getCompetiteur()->getClassementWCSL() > lesParticipants[j].getCompetiteur()->getClassementWCSL() ||
                (lesParticipants[i].getCompetiteur()->getClassementWCSL() == lesParticipants[j].getCompetiteur()->getClassementWCSL() &&
                    lesParticipants[i].getCompetiteur()->getClassementFIS() > lesParticipants[j].getCompetiteur()->getClassementFIS())) {
                Participation temp = lesParticipants[i];
                lesParticipants[i] = lesParticipants[j];
                lesParticipants[j] = temp;
            }
        }
    }
}

void Course::afficherParticipants() {
    std::cout << "Liste des participants à la compétition dans l’ordre de départ croissant :" << std::endl;
    for (int i = 0; i < nbParticipants; i++) {
        Competiteur* c = lesParticipants[i].getCompetiteur();
        std::cout << "Dossard : " << lesParticipants[i].getNumDossard()
            << " Classement : " << c->getClassementFIS()
            << " Competiteur : Numero : " << c->getNumeroCompetiteur()
            << " Nom : " << c->getNom()
            << " Prenom : " << c->getPrenom()
            << " FIS : " << c->getClassementFIS()
            << " WCSL : " << c->getClassementWCSL() << std::endl;
    }
}




