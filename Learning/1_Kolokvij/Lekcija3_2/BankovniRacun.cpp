#include "BankovniRacun.h"

string BankovniRacun::getBrojRacuna() const {
	return brojRacuna;
}

string BankovniRacun::getTipKlijenta() const {
	return tipKlijenta;
}

string BankovniRacun::getTipRacuna() const {
	return tipRacuna;
}

void BankovniRacun::setBrojRacuna(string _brojRacuna) {
	if (_brojRacuna.length() == 8 && _brojRacuna[0] == '0') {
		brojRacuna = _brojRacuna;
	}
	else {
		cout << "Neispravan broj racuna!" << endl;
		_Exit(10);
	}
}

void BankovniRacun::setTipKlijenta(string _tipKlijenta) {
	if (_tipKlijenta == "fizicka" || _tipKlijenta == "privatna") {
		tipKlijenta = _tipKlijenta;
	}
	else {
		cout << "Neispravan tip klijenta!\n";
		_Exit(10);
	}
}

void BankovniRacun::setTipRacuna(string _tipRacuna) {
	if (_tipRacuna == "ziro" || _tipRacuna == "tekuci" || _tipRacuna == "devizni") {
		tipRacuna = _tipRacuna;
	}
	else {
		cout << "Neispravan tip racuna!";
		_Exit(10);
	}
}