#include "Osoba.h"
using namespace std;

void Osoba::Provjera(string& abcd) {
	for (int i = 0; i < abcd.length(); i++) {
		if (abcd[i] >= 'A' && abcd[i] <= 'Z') {
			abcd[i] += 32;
		}
	}
	abcd[0] -= 32;
}

bool Osoba::KolikoGodina(int g) {
	if (g < 1900) {
		return false;
	}
	else {
		return true;
	}
}

string Osoba::getIme() const{
	return ime;
}

string Osoba::getPrezime() const{
	return prezime;
}

int Osoba::getGodinaRodjenja() const{
	return godinaRodjenja;
}

void Osoba::setIme(string _ime) {
	Provjera(_ime);
	ime = _ime;
}

void Osoba::setPrezime(string _prezime) {
	Provjera(_prezime);
	prezime = _prezime;
}

void Osoba::setGodinaRodjenja(int _godina) {
	if (KolikoGodina(_godina)) {
		godinaRodjenja = _godina;
	}
	else {
		godinaRodjenja = NULL;
	}
}