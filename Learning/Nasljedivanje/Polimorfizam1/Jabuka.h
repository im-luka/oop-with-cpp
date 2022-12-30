#pragma once
#include "Artikl.h"

class Jabuka : public Artikl
{
private:
	static int cijena;

public:
	Jabuka(int _kolicina) : Artikl(_kolicina) {}

	int getCijena() {
		return Artikl::kolicina * cijena;
	}
};

