#include "voitureSport.h"
#include "v8.h"
#include <sstream>
#include <string>
using namespace std;

VoitureSport::VoitureSport()
{
	this->modele = "Inconnu";
	this->prix = 0;
	Moteur* base = new v8(&taille, &puissance);
}

VoitureSport::VoitureSport(string modele)
{
	this->modele = modele;
	this->prix = 0;
}

VoitureSport::VoitureSport(string modele, int prix)
{
	this->modele = modele;
	this->prix = prix;
}

VoitureSport::~VoitureSport()
{

}

string VoitureSport::exporter()
{	
	stringstream xml;
	xml << "<VoitureSport>"
		<< "<modele>" << this->modele << "</modele" << "<prix>" << this->prix << "</prix>"
		<< "<Moteur>" << "<taille>" << this->taille << "</taille>" << "<puissance>" << this->puissance << "</puissance>"
		<< "</Moteur>"
		<< "</VoitureSport>";
	return xml.str();
}
