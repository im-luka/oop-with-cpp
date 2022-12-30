#include "Osoba.h"

void Provjera(string naziv)
{
	for (int i = 0; i < naziv.length(); i++) {
		if (naziv[i] >= 'A' && naziv[i] <= 'Z') {
			naziv[i] += 32;
		}
		naziv[0] -= 32;
	}
}

string Osoba::getIme() const
{
	return ime;
}

string Osoba::getPrezime() const
{
	return prezime;
}

int Osoba::getGodina() const
{
	return godina;
}

void Osoba::setIme(string _ime)
{
	Provjera(_ime);
	ime = _ime;
}

void Osoba::setPrezime(string _prezime)
{
	Provjera(_prezime);
	prezime = _prezime;
}

void Osoba::setGodina(int _godina)
{
	if (_godina < 1900) {
		cout << "Krivi unos!\n";
		_Exit(10);
	}
	else {
		godina = _godina;
	}
}