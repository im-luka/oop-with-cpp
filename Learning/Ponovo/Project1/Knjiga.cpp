#include "Knjiga.h"

Knjiga::Knjiga(string _naslov, string _autor)
{
	naslov = _naslov;
	autor = _autor;
}

void Knjiga::nedostupna()
{
	posudjena = true;
}

void Knjiga::Ispis()
{
	cout << naslov << " " << autor << " " << brStr << " " << posudjena << endl;
}