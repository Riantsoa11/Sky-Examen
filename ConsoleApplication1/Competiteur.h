#ifndef COMPETITEUR_H
#define COMPETITEUR_H

#include <string>
using namespace std;

class Competiteur {
private:
    int numeroCompetiteur;
    string nomCompetiteur;
    string prenomCompetiteur;
    int classementFIS;
    int classementWCSL;

public:
    Competiteur(int numero, string nom, string prenom, int classementFIS, int classementWCSL);
    int getClassementFIS();
    int getClassementWCSL();
    string getNom();
    string getPrenom();
    int getNumeroCompetiteur();

};

#endif
