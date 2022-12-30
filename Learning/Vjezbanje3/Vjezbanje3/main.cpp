#include <iostream>
#include <vector>
#include <string>
#include "Osoba.h"
#include "Bodovi.h"

using namespace std;

void Sortiraj(vector<Bodovi> &niz, int x);

int main()
{
	vector<Bodovi> niz;

	char uvjet = 'D';
	cout << "Unesi osobu" << endl;

	do{
		Bodovi o1;
		cout << "Ime: ";
		cin >> o1.osoba.ime;
		cout << "Prezime: ";
		cin >> o1.osoba.prezime;
		cout << "JMBAG: ";
		cin >> o1.osoba.jmbag;
		cout << "Bodovi iz programiranja: ";
		cin >> o1.bod;
		niz.push_back(o1);

		cout << endl << "Nova osoba? (D/N)" << endl;
		cin >> uvjet;
	}while(uvjet != 'N');

	cout << endl << "----------------------------------------" << endl;
	for (int i = 0; i < niz.size(); i++) {
		cout << niz[i].osoba.ime << " | " << niz[i].osoba.prezime << " | " << niz[i].osoba.jmbag << " | " << niz[i].bod << endl;
	}

	cout << endl << "----------------------------------------" << endl << "Nakon sorta" << endl;

	Sortiraj(niz, niz.size());
	for (int i = 0; i < niz.size(); i++) {
		cout << niz[i].osoba.ime << " | " << niz[i].osoba.prezime << " | " << niz[i].osoba.jmbag << " | " << niz[i].bod << endl;
	}

	return 0;
}

void Sortiraj(vector<Bodovi> &niz, int x)
{
	Bodovi xvar;
	for (int i = 0; i < niz.size(); i++) {
		for (int j = i + 1; j < niz.size(); j++) {
			if (niz[i].bod > niz[j].bod) {
				xvar = niz[i];
				niz[i] = niz[j];
				niz[j] = xvar;
			}
		}
	}
}