#include "Garaza.h"
#include "Predmet.h"

int Garaza::getVelicinaX() {
	return velicinaX;
}

int Garaza::getVelicinaY() {
	return velicinaY;
}

bool Garaza::getAutomatskoUp() {
	return automatskoUp;
}

string Garaza::getLokacija() {
	return lokacija;
}

void Garaza::setVelicinaX(int _velicinaX) {
	velicinaX = _velicinaX;
}

void Garaza::setVelicinaY(int _velicinaY) {
	velicinaY = _velicinaY;
}

void Garaza::setAutomatskoUp(string& _automatskoUp) {
	if (_automatskoUp == "DA") {
		automatskoUp = true;
	}
}

void Garaza::setLokacija(string& _lokacija) {
	lokacija = _lokacija;
}