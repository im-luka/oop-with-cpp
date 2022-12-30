#include "Kupac.h"

int main()
{
	Kupac Ante(Racun(1));
	Ante.racun.dodaj(Artikl("Jabuka", 1, 6));
	Ante.racun.dodaj(Artikl("Banana", 2, 7.5));   
	Ante.racun.dodaj(Artikl("Coca cola 2l", 2, 10));

	cout << "Ukupno: " << Ante.racun.ukupnaCijena() << " kn" << endl;

	string ime;
	double cij = -10;

	for (int i = 0; i < Ante.racun.artikli.size(); i++) {
		if (Ante.racun.artikli[i].cijena > cij) {
			cij = Ante.racun.artikli[i].cijena;
			ime = Ante.racun.artikli[i].naziv;
		}
	}

	cout << "Najskuplje placeni artikl je: " << ime << " " << cij << "kn.\n";

	return 0;
}