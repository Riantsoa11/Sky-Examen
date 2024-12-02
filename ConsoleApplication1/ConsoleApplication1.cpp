#include <iostream>
#include "Competiteur.h"
#include "Participation.h"
#include "Course.h"
#include "CourseSlalom.h"

using namespace std;

int main() {
    Competiteur* A = new Competiteur(1, "Perinne", "Pellen", 60, 12);
    Competiteur* B = new Competiteur(2, "Ingemar", "Stenmark", 120, 13);
    Competiteur* C = new Competiteur(3, "Ingrid", "Jacquemod", 30, 15);
    Competiteur* D = new Competiteur(4, "Alberto", "Tomba", 28, 16);
    Competiteur* E = new Competiteur(5, "Mikaël", "Von Grünigen", 1, 7);
    Competiteur* F = new Competiteur(6, "Bode", "Miller", 3, 10);
    Competiteur* G = new Competiteur(7, "Jean-Baptiste", "Grange", 6, 23);
    Competiteur* H = new Competiteur(8, "Marcel", "Hirscher", 12, 13);

    Participation* lesParticipants = new Participation[100];

    lesParticipants[0] = Participation(0, 60, A);
    lesParticipants[1] = Participation(0, 120, B);
    lesParticipants[2] = Participation(0, 30, C);
    lesParticipants[3] = Participation(0, 28, D);
    lesParticipants[4] = Participation(0, 1, E);
    lesParticipants[5] = Participation(0, 3, F);
    lesParticipants[6] = Participation(0, 6, G);
    lesParticipants[7] = Participation(0, 12, H);

    // CourseSlalom Object
    CourseSlalom S("Kitzbühel", "20/01/2025", lesParticipants);

    std::cout << "Liste des participants sans attribution de dossards (Dossards = 0):" << std::endl;
    S.afficherParticipants();

    std::cout << "----------------------------------------------------------------------------------------------------------" << std::endl;

    // Traitement des dossards
    S.traitementDossards();

    // Affichage des participants triés par dossard
    std::cout << "Liste des participants avec attribution de dossards :" << std::endl;
    S.afficherParticipants();

    // Libérer la mémoire
    delete[] lesParticipants;
    delete A;
    delete B;
    delete C;
    delete D;
    delete E;
    delete F;
    delete G;
    delete H;

    return 0;
}
