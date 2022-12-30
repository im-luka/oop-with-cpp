#include "Ekipa.h"

Ekipa::Ekipa(string _naziv) {
	naziv = _naziv;
}

void Ekipa::dodajIgraca(Igrac igrac) {
	Igrac ig;
	ig.ime = igrac.ime;
	ig.prezime = igrac.prezime;
	ig.broj = igrac.broj;
	ig.cijena = igrac.cijena;
	popis.push_back(ig);
}

void Ekipa::ispis() {
	for (int i = 0; i < popis.size(); i++) {
		cout << popis[i].ime << " " << popis[i].prezime << " " << popis[i].broj << " " << popis[i].cijena << endl;
	}
}

Igrac Ekipa::dohvatiNajskupljeg() {
	Igrac pom;
	for (int i = 0; i < popis.size(); i++) {
		for (int j = i + 1; j < popis.size(); j++) {
			if (popis[i].cijena > popis[j].cijena) {
				pom = popis[i];
			}
		}
	}
	return pom;
}
