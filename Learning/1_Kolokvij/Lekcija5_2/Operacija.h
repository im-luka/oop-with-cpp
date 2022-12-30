#pragma once

namespace Matematika {
	class Operacija;
}

class Operacija
{
public:
	int broj1;
	int broj2;
	char operacija;

public:
	Operacija(int _broj1, int _broj2, char _operacija) : broj1(_broj1), broj2(_broj2), operacija(_operacija) {}

	short rezultat() {
		short s;
		if (operacija == '/' && broj2 == 0) {
			throw 0;
		}
		if (operacija == '+') {
			s = broj1 + broj2;
		}
		if (operacija == '-') {
			s = broj1 - broj2;
		}
		if (operacija == '*') {
			s = broj1 * broj2;
		}
		if (operacija == '/') {
			s = broj1 / broj2;
		}
		return s;
	}
};

