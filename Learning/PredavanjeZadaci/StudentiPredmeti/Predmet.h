#pragma once
#include <string>
using namespace std;

class Predmet
{
public:
	int sifra;
	string naziv;
	int ocjena;

	Predmet() {}
	Predmet(int _sifra, string _naziv, int _ocjena);
};

