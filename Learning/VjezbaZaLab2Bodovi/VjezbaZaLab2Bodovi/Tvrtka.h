#pragma once
#include "Zaposlenik.h"

class Tvrtka
{
public:
	string oib;
	string naziv;
	string adresa;
	vector<Zaposlenik*> zaposlenici;

	Tvrtka(){}
	Tvrtka(string _oib, string _naziv, string _adresa) : oib(_oib), naziv(_naziv), adresa(_adresa) {}

	Tvrtka(const Tvrtka& t) {
		oib = t.oib;
		naziv = t.naziv;
		adresa = t.adresa;
		for (int i = 0; i < t.zaposlenici.size(); i++) {
			zaposlenici.push_back(new Zaposlenik);
			*zaposlenici[i] = *t.zaposlenici[i];
		}
	}

	Tvrtka& operator=(const Tvrtka& t) {
		if (this != &t) {
			oib = t.oib;
			naziv = t.naziv;
			adresa = t.adresa;
			for (int i = 0; i < zaposlenici.size(); i++) {
				delete zaposlenici[i];
			}
			zaposlenici.clear();
			for (int i = 0; i < t.zaposlenici.size(); i++) {
				zaposlenici.push_back(new Zaposlenik);
				*zaposlenici[i] = *t.zaposlenici[i];
			}
		}
		return *this;
	}

	Tvrtka& operator=(Tvrtka&& t) {
		if (this != &t) {
			oib = t.oib;
			naziv = t.naziv;
			adresa = t.adresa;
			for (int i = 0; i < zaposlenici.size(); i++) {
				delete zaposlenici[i];
			}
			zaposlenici.clear();
			for (int i = 0; i < t.zaposlenici.size(); i++) {
				zaposlenici.push_back(t.zaposlenici[i]);
				t.zaposlenici[i] = NULL;
			}
		}
		return *this;
	}
};

