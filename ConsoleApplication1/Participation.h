#ifndef PARTICIPATION_H
#define PARTICIPATION_H

#include "Competiteur.h"

class Participation {
private:
    Competiteur* leCompetiteur;
    int numDossard;
    int classement;

public:
    Participation();
    Participation(int numDossard, int classement, Competiteur* competiteur);
    void setNumDossard(int num);
    int getNumDossard();
    Competiteur* getCompetiteur();
};

#endif
