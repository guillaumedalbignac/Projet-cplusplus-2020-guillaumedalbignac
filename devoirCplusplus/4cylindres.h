#pragma once
#include <iostream>
#include "moteur.h"
using namespace std;

class quatreCylindre : public Moteur {
public:
	quatreCylindre();
	quatreCylindre(double taille);
	quatreCylindre(double* taille, int* puissance);

	virtual ~quatreCylindre();

	virtual string exporter();

	double getTaille() const { return taille; }

	void setTaille(double taille) { this->taille = taille; }

	int getPuissance() const { return puissance; }

	void setPuissance(int puissance) { this->puissance = puissance;  }

protected:
	double taille;
	int puissance;
};