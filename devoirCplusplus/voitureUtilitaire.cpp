#include "voitureUtilitaire.h"
#include <sstream>
#include <string>
using namespace std;

VoitureUtilitaire::VoitureUtilitaire()
{
	this->modele = "Inconnu";
	this->prix = 0;
	Moteur* base = new quatreCylindre(&taille, &puissance);
}

VoitureUtilitaire::VoitureUtilitaire(string modele)
{
	this->modele = modele;
	this->prix = 0;
}

VoitureUtilitaire::VoitureUtilitaire(string modele, int prix)
{
	this->modele = modele;
	this->prix = prix;
}

VoitureUtilitaire::~VoitureUtilitaire()
{

}

string VoitureUtilitaire::exporter()
{
	stringstream xml;
	xml << "<VoitureUtilitaire>" 
		<< "<modele>" << this->modele << "</modele" << "<prix>" << this->prix << "</prix>" 
		<< "<Moteur>" << "<taille>" << this->taille << "</taille>" << "<puissance>" << this->puissance << "</puissance>"
		<< "</Moteur>"
		<< "</VoitureUtilitaire>";
	return xml.str();
}
