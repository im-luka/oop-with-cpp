#include "Zaposlenik.h"

Zaposlenik::Zaposlenik() {
	ime = "BEZIMENI";
	prezime = "BEZPREZIMENI";
	staz = NULL;
}

string Zaposlenik::getIme() const {
	return ime;
}

string Zaposlenik::getPrezime() const {
	return prezime;
}

int Zaposlenik::getStaz() const {
	return staz;
}

void Zaposlenik::setIme(string _ime) {
	ime = _ime;
}

void Zaposlenik::setPrezime(string _prezime) {
	prezime = _prezime;
}

void Zaposlenik::setStaz(int _staz) {
	if (_staz < 0 || _staz > 35) {
		cout << "Greska pri unosu radnog staza!" << endl;
		staz = NULL;
	}
	else {
		staz = _staz;
	}
}