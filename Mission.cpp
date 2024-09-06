#include "Mission.h"
#include <iostream>

using namespace std;

Mission::Mission() : nbPersonne(0), descriptifMission("description ici la"), nbHeure(0) {}

Mission::Mission(int nbPers, string descriptif, int nbHrs)
    : nbPersonne(nbPers), descriptifMission(descriptif), nbHeure(nbHrs) {}

Mission::~Mission() {
    cout << "supprimer la mission : " << this->descriptifMission << endl;
}

Mission::Mission(const Mission& mission) {
    cout << "Copie de Mission" << endl;
    this->nbPersonne = mission.nbPersonne;
    this->descriptifMission = mission.descriptifMission;
    this->nbHeure = mission.nbHeure;
}

Mission& Mission::operator=(const Mission& mission) {
    cout << "Affectation de la mission" << endl;
    if (this != &mission) {
        this->nbPersonne = mission.nbPersonne;
        this->descriptifMission = mission.descriptifMission;
        this->nbHeure = mission.nbHeure;
    }
    return *this;
}

int Mission::getNbPersonne() const {
    return this->nbPersonne;
}

void Mission::setNbPersonne(int nbPers) {
    this->nbPersonne = nbPers;
}

string Mission::getDescriptifMission() const {
    return this->descriptifMission;
}

void Mission::setDescriptifMission(string descriptif) {
    this->descriptifMission = descriptif;
}

int Mission::getNbHeure() const {
    return this->nbHeure;
}

void Mission::setNbHeure(int nbHrs) {
    this->nbHeure = nbHrs;
}

void Mission::afficherMission() const {
    cout << "Mission :" << endl;
    cout << "Nombre de personnes : " << this->nbPersonne << endl;
    cout << "Description : " << this->descriptifMission << endl;
    cout << "Nombre d'heures : " << this->nbHeure << endl;
}