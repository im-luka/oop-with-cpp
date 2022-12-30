#include "Osoba.h"

int main()
{
	Osoba* polje = new Osoba[5];
	Osoba os;
	string im, pre;
	int god;

	for (int i = 0; i < 2; i++) {
		cout << "Unesi ime, prezime i godinu za " << i+1 << ". osobu: ";
		cin >> im >> pre >> god;
		os.setIme(im);
		os.setPrezime(pre);
		os.setGodina(god);
		polje[i] = os;
	}

	for (int i = 0; i < 2; i++) {
		cout << "Osoba " << i + 1 << ": " << polje[i].getIme() << " " << polje[i].getPrezime() << " " << polje[i].getGodina() << endl;
	}

	delete[] polje;

	return 0;
}