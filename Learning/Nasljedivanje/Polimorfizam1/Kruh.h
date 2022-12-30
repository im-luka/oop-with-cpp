#pragma once
#include "Artikl.h"

class Kruh : public Artikl
{
private:
	static int cijena;

public:
	Kruh(int _kolicina) : Artikl(_kolicina) {}

	int getCijena() {
		return Artikl::kolicina * cijena;
	}
};

