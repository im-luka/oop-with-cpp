#include "Racun.h"

Racun::Racun(int _br) {
	redniBroj = _br;
};

void Racun::dodaj(Artikl art) {
	Artikl artikl;
	artikl.naziv = art.naziv;
	artikl.kolicina = art.kolicina;
	artikl.cijena = art.cijena;
	popis.push_back(artikl);
};

int Racun::ukupnaCijena() {
	int ukupno = 0;
	for (int i = 0; i < popis.size(); i++) {
		ukupno += popis[i].cijena * popis[i].kolicina;
	}
	return ukupno;
}

void Racun::sort() {
	cout << "Najskuplji artikl je: " << endl;
	string pomoc;
	for (int i = 0; i < popis.size(); i++) {
		for (int j = i + 1; j < popis.size(); j++) {
			if (popis[i].cijena < popis[j].cijena) {
				pomoc = popis[j].naziv;
			}
			else {
				pomoc = popis[i].naziv;
			}
		}
	}
	cout << pomoc << endl;
}