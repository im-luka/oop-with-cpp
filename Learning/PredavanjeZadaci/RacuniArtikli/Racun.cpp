#include "Racun.h"

Racun::Racun(int _redniBroj) {
	redniBroj = _redniBroj;
}

void Racun::dodaj(Artikl art)
{
	Artikl artikl;
	artikl.naziv = art.naziv;
	artikl.kolicina = art.kolicina;
	artikl.cijena = art.cijena;
	popis.push_back(artikl);
}

void Racun::ukupnaCijena() {
	double suma = 0;
	for (int i = 0; i < popis.size(); i++) {
		suma += popis[i].cijena * popis[i].kolicina;
	}
	cout << suma;
}

void Racun::najskuplji() {
	Artikl art;
	for (int i = 0; i < popis.size(); i++) {
		for (int j = i + 1; j < popis.size(); j++) {
			if (popis[i].cijena > popis[j].cijena) {
				art = popis[i];
			}
		}
	}
	cout << art.naziv << " " << art.cijena << " " << art.kolicina;
}