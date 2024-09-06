/*****************************************************************//**
 * \file   main.cpp
 * \brief  
 * 
 * \author Valentin
 * \date   September 2024
 *********************************************************************/
#include <string>
#include "Entreprise.h"
#include "Mission.h"

using namespace std;

int main() {

    Entreprise entreprise;
    cout << "Entreprise :" << endl;
    cout << "Nom : " << entreprise.getNomEntreprise() << endl;
    cout << "Ville : " << entreprise.getVilleEntreprise() << endl;
    cout << endl;

    Mission mission(5, "mission", 200);
    mission.afficherMission();
    cout << endl;

    return 0;
}