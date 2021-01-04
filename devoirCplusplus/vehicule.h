#pragma once
#include <iostream>
#include "moteur.h"
#include "4cylindres.h"
using namespace std;

class Vehicule : public Moteur {
public:
	Vehicule();
	Vehicule(string modele);
	Vehicule(string modele, int prix);

	virtual ~Vehicule();

	virtual string exporter();

	int getPrix() const { return prix; }

	void setPrix(int prix) { this->prix = prix; }

	const string& getModele() const { return modele; }

	void setModele(const string& modele) { this->modele = modele; }

	void operator++();

	void operator++(int);

protected:
	string modele;
	int prix;
}; 
