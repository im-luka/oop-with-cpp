#include <iostream>
#include "Ekipa.h"
#include "Igrac.h"

using namespace std;

int main()
{
	Ekipa ekipa;
	ekipa.naziv = "Tim raketa";
	Igrac i1("Luka", "Modric");
	i1.broj = 10;
	i1.cijena = 12;
	ekipa.dodajIgraca(i1);
	Igrac i2("Mario", "Mandzukic");
	i2.broj = 9;
	i2.cijena = 10;
	ekipa.dodajIgraca(i2);
	Igrac i3("Darijo", "Srna");
	i3.broj = 11;
	i3.cijena = 11;
	ekipa.dodajIgraca(i3);

	ekipa.ispis();

	Igrac najskuplji = ekipa.dohvatiNajskupljeg();
	cout << "Najskuplji igrac: ";
	cout << najskuplji.ime << " " << najskuplji.prezime << " " << najskuplji.broj << " " << najskuplji.cijena << endl;

	return 0;
}