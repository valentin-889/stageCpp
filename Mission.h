
#define MISSION_H
#include <iostream>
#include <string>

class Mission
{
private:
    int nbPersonne;
    std::string descriptifMission;
    int nbHeure;

public:
    Mission();
    ~Mission();
    Mission(const Mission& mission);
    Mission& operator=(const Mission& mission);

    Mission(int nbPers, std::string descriptif, int nbHrs);

    int getNbPersonne() const;
    void setNbPersonne(int nbPers);
    std::string getDescriptifMission() const;
    void setDescriptifMission(std::string descriptif);
    int getNbHeure() const;
    void setNbHeure(int nbHrs);

    void afficherMission() const;
};

