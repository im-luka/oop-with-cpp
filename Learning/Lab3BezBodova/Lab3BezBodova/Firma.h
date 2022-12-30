#pragma once
#include <string>
#include <iostream>
using namespace std;

class Firma
{
private:
	string naziv;
	string oib;
	string adresa;

public:
	string getNaziv() const;
	string getOib() const;
	string getAdresa() const;

	void setNaziv(string _naziv);
	void setOib(string _oib);
	void setAdresa(string _adresa);
};

