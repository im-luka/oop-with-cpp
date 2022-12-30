#pragma once
#include <vector>
#include <iostream>
#include "Artikl.h"

using namespace std;

class Racun
{
public:
	int redniBroj;
	vector<Artikl> popis;
	Racun() {};
	Racun(int _br);

	void dodaj(Artikl art);
	int ukupnaCijena();
	void sort();
};

