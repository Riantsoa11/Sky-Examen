#ifndef COURSESLALOM_H
#define COURSESLALOM_H

#include "Course.h"

class CourseSlalom : public Course {
private:
    void attribuerDossards(int borneInf, int borneSup);

public:
    CourseSlalom(string nom, string date, Participation* participants); // Updated constructor
    void traitementDossards() override;
};

#endif
