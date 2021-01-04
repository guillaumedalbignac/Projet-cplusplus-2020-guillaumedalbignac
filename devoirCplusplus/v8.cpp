#include "v8.h"
#include <sstream>
#include <string>
using namespace std;

v8::v8()
{
	this->taille = 0.0;
	this->puissance = 0;
}

v8::v8(double taille)
{
	this->taille = taille;
	this->puissance = 0;
}

v8::v8(double* taille, int* puissance)
{
	this->taille = *taille;
	this->puissance = *puissance;
}

v8::~v8()
{

}

string v8::exporter()
{
	stringstream xml;
	xml << "<v8>" << "<taille>" << this->taille << "</taille>" << "<puissance>" << this->puissance << "</puissance>" << "</v8>";
	return xml.str();
}

