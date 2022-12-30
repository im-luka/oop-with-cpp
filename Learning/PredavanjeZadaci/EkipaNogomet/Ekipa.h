#pragma once
#include <vector>
#include "Igrac.h"
using namespace std;

class Ekipa
{
public:
	string naziv;
	vector<Igrac> popis;

	Ekipa() {}
	Ekipa(string _naziv);

	void dodajIgraca(Igrac _igrac);
	void ispis();
	Igrac dohvatiNajskupljeg();
};

