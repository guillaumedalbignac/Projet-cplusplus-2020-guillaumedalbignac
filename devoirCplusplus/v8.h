#pragma once
#include <iostream>
#include "moteur.h"
using namespace std;

class v8 : public Moteur {
public:
	v8();
	v8(double taille);
	v8(double* taille, int *puissance);

	virtual ~v8();

	virtual string exporter();

	double getTaille() const { return taille; }

	void setTaille(double taille) { this->taille = taille; }

	int getPuissance() const { return puissance; }

	void setPuissance(int puissance) { this->puissance = puissance; }

protected:
	double taille;
	int puissance;
};