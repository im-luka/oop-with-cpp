#pragma once
#include <string>
using namespace std;

class Artikl
{
public:
	string naziv;
	double cijena;
	int kolicina;

	Artikl(string _naziv, int _kolicina, double _cijena) {
		naziv = _naziv;
		kolicina = _kolicina;
		cijena = _cijena;
	}
};

