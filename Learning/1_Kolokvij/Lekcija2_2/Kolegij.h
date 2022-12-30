#pragma once
#include "Bodovi.h"

class Kolegij
{
public:
	string naziv;
	vector<Bodovi> bodovi;

	Kolegij() {}
	Kolegij(string _naziv, vector<Bodovi> _bodovi) {
		naziv = _naziv;
		bodovi = _bodovi;
	}
};

