#include "Racun.h"

string Racun::getBrojRacuna() const {
	return brojRacuna;
}

string Racun::getTipKlijenta() const {
	return tipKlijenta;
}

string Racun::getTipRacuna() const {
	return tipRacuna;
}

void Racun::setBrojRacuna(string _brojRacuna) {
	if ((_brojRacuna.length() != 8) || (_brojRacuna[0] != '0')) {
		cout << "Krivi podaci!\n";
		_Exit(10);
	}
	else {
		brojRacuna = _brojRacuna;
	}
}

void Racun::setTipKlijenta(string _tipKlijenta) {
	if (_tipKlijenta != "fizicka") {
		if (_tipKlijenta != "privatna") {
			cout << "Krivi podaci!\n";
			_Exit(10);
		}
	}
	else {
		tipKlijenta = _tipKlijenta;
	}
}

void Racun::setTipRacuna(string _tipRacuna) {
	if (_tipRacuna != "tekuci") {
		if (_tipRacuna != "ziro") {
			if (_tipRacuna != "devizni") {
				cout << "Krivi podaci!\n";
				_Exit(10);
			}
		}
	}
	else {
		tipRacuna = _tipRacuna;
	}
}