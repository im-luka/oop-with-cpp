#pragma once
#include "Osoba.h"

using namespace std;

class Bodovi
{
public:
	Osoba osoba;
	int bod;
	Bodovi() {};
	Bodovi(Osoba _osoba, int _bod) {
		osoba = _osoba;
		bod = _bod;
	}
};

