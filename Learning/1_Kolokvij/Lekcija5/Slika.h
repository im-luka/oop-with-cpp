#pragma once

class Slika
{
	double cijena;
	static double ukupnaCijena;
	static int brInstanci;

public:
	Slika(double _cijena) {
		cijena = _cijena;
		ukupnaCijena += _cijena;
		brInstanci++;
	}

	static double ProsjecnaCijena() {
		return ukupnaCijena / brInstanci;
	}
};