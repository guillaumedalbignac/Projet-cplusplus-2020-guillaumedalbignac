#pragma once
#include <iostream>
#include "moteur.h"
using namespace std;

class Moteur {
public:
	Moteur();
	Moteur(double taille);
	Moteur(double taille, int puissance);

	virtual ~Moteur();

	virtual string exporter();

	double getTaille() const { return taille; }

	void setTaille(double taille) { this->taille = taille; }

	int getPuissance() const { cout << puissance;  return puissance; }

	void setPuissance(int puissance) { this->puissance = puissance; }

	string statusMoteur(int cas);

protected:
	double taille;
	int puissance;

};
