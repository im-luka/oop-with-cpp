#include "Stan.h"

Stan::Stan(string _tip, string _kategorija) {
	tip = _tip;
	kategorija = _kategorija;
}

Stan::Stan(string _vrstaMaterijala, int _povrsina) {
	vrstaMaterijala = _vrstaMaterijala;
	povrsina = _povrsina;
}

void Stan::NoviMaterijal(string mat)
{
	vrstaMaterijala = mat;
}

void Stan::Display()
{
	cout << tip << " " << kategorija << " " << vrstaMaterijala << " " << povrsina << endl;
}