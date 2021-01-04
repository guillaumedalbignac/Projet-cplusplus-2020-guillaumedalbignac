#include "vehicule.h"
#include <sstream>
#include <string>
using namespace std;

Vehicule::Vehicule()
{
	this->modele = "Inconnu";
	this->prix = 0;
}

Vehicule::Vehicule(string modele)
{
	this->modele = modele;
	this->prix = 0;
}

Vehicule::Vehicule(string modele, int prix)
{
	this->modele = modele;
	this->prix = prix;
}

Vehicule::~Vehicule()
{

}

string Vehicule::exporter()
{
	stringstream xml;
	xml << "<Vehicule>" << "<modele>" << this->getModele() << "</modele>" << "<prix>" << this->getPrix() << "</prix>"
		<< "</Vehicule>";
	return xml.str();
}


void Vehicule::operator++()
{
	this->puissance += 100;
}

void Vehicule::operator++(int)
{
	this->puissance += 100;
}

