#pragma once
#include <string>
#include <iostream>
using namespace std;

class Igrac
{
public:
	string ime;
	string prezime;
	int broj;
	int cijena;

	Igrac(){}
	Igrac(string _ime, string _prezime);
};

