#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "vehicule.h"
#include "moteur.h"
#include "voitureSport.h"
#include "voitureUtilitaire.h"
#include "4cylindres.h"

using namespace std;

void jouerPartie(vector<Vehicule*> listeDeVehicules)
{
	//vector<Vehicule*> listeDeVehicules;

	Vehicule* pointeSport = new VoitureSport();
	pointeSport->setModele("Maclaren Senna");
	pointeSport->setPrix(930000);
	pointeSport->setPuissance(880);
	listeDeVehicules.push_back(pointeSport);

	Vehicule* pointeUtilitaire = new VoitureSport();
	pointeUtilitaire->setModele("Mercedes Sprinter");
	pointeUtilitaire->setPrix(18742);
	++(*pointeUtilitaire);
	listeDeVehicules.push_back(pointeUtilitaire);

	vector<Vehicule*>::iterator visiteur;

	cout << endl;
	cout << "Affichage des vehicules et de leurs caracteriqtiques ! " << endl;

	for (visiteur = listeDeVehicules.begin(); visiteur != listeDeVehicules.end(); visiteur++) {
		cout << "Le modele du vehicule est " << (*visiteur)->getModele() << endl;
		cout << "Le prix du vehicule est " << (*visiteur)->getPrix() << endl;
		(*visiteur)->exporter();
	}
}

void sauvegarderPartie(bool partie, string cheminFichier, vector<Vehicule*> listeDeVehicules)
{
	ofstream fichierSortie;

	if (partie == false) {	
		fichierSortie.open(cheminFichier, ofstream::out | ofstream::app);

		for (int i = 0; i < listeDeVehicules.size(); i++) {
			fichierSortie << listeDeVehicules.at(i)->exporter() << endl;
		}

		fichierSortie.close();
	}
	else {
		cout << "Le fichier n'a pas été sauvegarder...!" << endl;
	}
}


int main() {
	vector<Vehicule*> listeDeVehicules;

	bool partie = true;
	char touche;
	 
	string cheminFichier = "sortie.txt";

	while (partie) {
		cout << endl;
		cout << "Bienvnue dans la concession automobile !" << endl
			 << "Que voulez vous faire ? " << endl
			 << "1 - Decouvrir le garage" << endl
			 << "2 - Quitter la concession" << endl;

		cin >> touche;

		switch (touche)
		{
		case '1': jouerPartie(listeDeVehicules);
				  break;
			
		case '2': partie = false;	
			      break;

		default: break;
		}		
	}
	sauvegarderPartie(partie, cheminFichier, listeDeVehicules);

	return 0;
}