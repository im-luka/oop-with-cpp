#include "Osoba.h"

void Provjera(string& bla) {
	for (int i = 0; i < bla.length(); i++) {
		if (bla[i] >= 'A' && bla[i] <= 'Z') {
			bla[i] += 32;
		}
	}
	bla[0] -= 32;
}

string Osoba::getIme() const {
	return ime;
}

string Osoba::getPrezime() const {
	return prezime;
}

int Osoba::getGodina() const {
	return godina;
}

void Osoba::setIme(string _ime) {
	Provjera(_ime);
	ime = _ime;
}

void Osoba::setPrezime(string _prezime) {
	Provjera(_prezime);
	prezime = _prezime;
}

void Osoba::setGodina(int _godina) {
	if (_godina >= 1900) {
		godina = _godina;
	}
	else {
		cout << "Neispravna godina!\n";
		_Exit(10);
	}
}