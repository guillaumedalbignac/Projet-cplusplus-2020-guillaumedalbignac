#pragma once
#include <iostream>
#include "vehicule.h"
using namespace std;

class VoitureUtilitaire : public Vehicule {
public:
	VoitureUtilitaire();
	VoitureUtilitaire(string modele);
	VoitureUtilitaire(string modele, int prix);

	virtual ~VoitureUtilitaire();

	virtual string exporter();

	int getPrix() const { return prix; }

	void setPrix(int prix) { this->prix = prix; }

	const string& getModele() const { return modele; }

	void setModele(const string& modele) { this->modele = modele; }

protected:
	string modele;
	int prix;
};