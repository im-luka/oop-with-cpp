#pragma once
#include "Pedalina.h"
#include <vector>

class Lokacija
{
public:
	string ime;
	string prezime;
	double koordinataX;
	double koordinataY;
	vector<Pedalina> pedaline;
};

