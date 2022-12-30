#pragma once

class Artikl
{
protected:
	int kolicina;

public:
	Artikl(int _kolicina) {
		kolicina = _kolicina;
	}

	virtual int getCijena() = 0;
};

