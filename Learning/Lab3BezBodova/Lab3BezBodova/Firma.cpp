#include "Firma.h"

string Firma::getNaziv() const {
	return naziv;
}

string Firma::getOib() const {
	return oib;
}

string Firma::getAdresa() const {
	return adresa;
}

void Firma::setNaziv(string _naziv) {
	if (_naziv.length() < 5) {
		cout << "Naziv mora imati barem 5 znakova." << endl;
		_Exit(10);
	}
	else {
		naziv = _naziv;
	}
}

void Firma::setOib(string _oib) {
	if (_oib.length() != 11) {
		cout << "Neispravan oib." << endl;
		_Exit(10);
	}
	else {
		oib = _oib;
	}
}

void Firma::setAdresa(string _adresa) {
	adresa = _adresa;
}