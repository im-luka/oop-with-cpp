#include "Predmet.h"

string Predmet::getNaziv() {
	return naziv;
}

int Predmet::getVrijednost() {
	return vrijednost;
}

void Predmet::setNaziv(string& _naziv) {
	naziv = _naziv;
}

void Predmet::setVrijednost(int _vrijednost) {
	vrijednost = _vrijednost;
}