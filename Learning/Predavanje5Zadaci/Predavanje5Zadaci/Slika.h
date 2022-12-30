#pragma once

class Slika
{
public:
	int cijena;
	static double ukupnaCijena;
	static int brInstanci;

	Slika(int _cijena) {
		cijena = _cijena;
		ukupnaCijena += _cijena;
		brInstanci++;
	}

	static double ProsjecnaCijena() {
		return ukupnaCijena / brInstanci;
	}
};

