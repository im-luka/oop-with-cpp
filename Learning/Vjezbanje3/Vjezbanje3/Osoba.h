#pragma once
#include <string>
using namespace std;

class Osoba
{
public:
	string ime;
	string prezime;
	string jmbag;
	Osoba() {};
	Osoba(string _ime, string _prezime, string _jmbag) {
		ime = _ime;
		prezime = _prezime;
		jmbag = _jmbag;
	}
};

