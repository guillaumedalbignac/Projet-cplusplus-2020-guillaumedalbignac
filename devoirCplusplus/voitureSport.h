#pragma once
#include <iostream>
#include "vehicule.h"
using namespace std;

class VoitureSport : public Vehicule {
public:
	VoitureSport();
	VoitureSport(string modele);
	VoitureSport(string modele, int prix);

	virtual ~VoitureSport();

	virtual string exporter();

	int getPrix() const { return prix; }

	void setPrix(int prix) { this->prix = prix; }

	const string& getModele() const { return modele; }

	void setModele(const string& modele) { this->modele = modele; }

protected:
	string modele;
	int prix;
};