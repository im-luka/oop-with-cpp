#include "Osoba.h"

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
		cout << "Greška!" << endl;
	}
}