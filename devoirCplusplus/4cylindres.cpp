#include "4cylindres.h"
#include <sstream>
#include <string>
using namespace std;

quatreCylindre::quatreCylindre()
{
	this->taille = 0.0;
	this->puissance = 0;
}

quatreCylindre::quatreCylindre(double taille)
{
	this->taille = taille;
	this->puissance = 0;
}

quatreCylindre::quatreCylindre(double* taille, int* puissance)
{
	this->taille = *taille;
	this->puissance = *puissance;
}

quatreCylindre::~quatreCylindre()
{

}

string quatreCylindre::exporter()
{
	stringstream xml;
	xml << "<4cylindres>" << "<taille>" << this->taille << "</taille>" << "<puissance>" << this->puissance << "</puissance>" << "</4cylindres>";
	return xml.str();
}
