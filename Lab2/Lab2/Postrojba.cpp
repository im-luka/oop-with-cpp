#include "Postrojba.h"

int GlavniStozer::Postrojba::getBrVojn() const {
	return brVojn;
}

string GlavniStozer::Postrojba::getNaziv() const {
	return naziv;
}

string GlavniStozer::Postrojba::getRang() const {
	return rang;
}

void GlavniStozer::Postrojba::setBrVojn(int _brVojn) {
	brVojn = _brVojn;
}