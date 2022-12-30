#pragma once
#include "Artikl.h"
#include<vector>
#include<iostream>

class Racun
{
public:
	int broj;
	vector<Artikl> artikli;

	Racun(){}
	Racun(int broj) {
		this->broj = broj;
	}

	void dodaj(Artikl art) {
		Artikl artikl(art.naziv, art.kolicina, art.cijena);
		artikli.push_back(artikl);
	}

	double ukupnaCijena() {
		double suma = 0;
		for (int i = 0; i < artikli.size(); i++) {
			suma += artikli[i].cijena * artikli[i].kolicina;
		}
		return suma;
	}
};

