#include "moteur.h"
#include <sstream>
#include <string>
using namespace std;

Moteur::Moteur()
{
	this->taille = 0.0;
	this->puissance = 0;
}

Moteur::Moteur(double taille)
{
	this->taille = taille;
	this->puissance = 0;
}

Moteur::Moteur(double taille, int puissance)
{
	this->taille = taille;
	this->puissance = puissance;
}

Moteur::~Moteur()
{

}

string Moteur::exporter()
{
	stringstream xml;
	xml << "<Moteur>" << "</Moteur>";
	return xml.str();
}

string Moteur::statusMoteur(int cas)
{
	switch (cas)
	{
	case 1:
		return "ON";
	case 2:
		return "OFF";

	case 3:
		return "En panne!";

	case 4:
		return "En reperations!";

	default:
		break;
	}
	return 0;
}
