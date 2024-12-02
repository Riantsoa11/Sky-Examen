#ifndef COURSE_H
#define COURSE_H

#include "Participation.h"

class Course {
protected:
    string nomCompetition;
    string dateCompetition;
    Participation* lesParticipants;
    int nbParticipants;

    void classerLesParticipants();

public:
    Course(string nom, string date, Participation* participants, int nbParticipants);
    virtual void traitementDossards() = 0;
    void afficherParticipants();
};

#endif
