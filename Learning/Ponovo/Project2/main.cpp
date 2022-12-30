#include <iostream>
#include <vector>
#include "Osoba.h"

using namespace std;

void Najstarija(vector<Osoba> niz);

int main()
{
	vector<Osoba> popis;
	string im, prez;
	int god;

	for (int i = 0; i < 5; i++) {
		Osoba inst;
		cout << i+1 << ".: ";
		cin >> im >> prez >> god;
		inst.setIme(im);
		inst.setPrezime(prez);
		inst.setGodina(god);
		popis.push_back(inst);
	}

	for (int i = 0; i < 5; i++) {
		cout << popis[i].getIme() << " " << popis[i].getPrezime() << " " << popis[i].getGodina() << endl;
	}

	Najstarija(popis);

	return 0;
}

void Najstarija(vector<Osoba> niz)
{
	Osoba osoba;
	for (int i = 0; i < niz.size(); i++) {
		for (int j = i + 1; j < niz.size(); j++) {
			if (niz[i].getGodina() < niz[j].getGodina()) {
				osoba = niz[i];
			}
		}
	}

	cout << "Najstarija osoba je: " << osoba.getIme() << " " << osoba.getPrezime();
}