#pragma once
#include <string>
#include <iostream>
using namespace std;

class Knjiga
{
public:
	string naslov;
	string autor;
	int brStr;
	bool posudjena;

	Knjiga() {}
	Knjiga(string _naslov, string _autor, int _brStr, bool _posudjena) : naslov(_naslov), autor(_autor), brStr(_brStr), posudjena(_posudjena) {}
	Knjiga(string _naslov, string _autor);

	void nedostupna();
	void Ispis();
};

