#include <iostream>
#include <string>
#include <vector>
#include "Osoba.h"

using namespace std;

int main()
{
	string ime, prezime;
	int godina;

	vector<Osoba> osobe;

	for (int i = 0; i < 5; i++) {
		Osoba os;
		cin >> ime >> prezime >> godina;
		os.setIme(ime);
		os.setPrezime(prezime);
		os.setGodinaRodjenja(godina);
		osobe.push_back(os);
	}

	cout << endl << "POPIS OSOBA: " << endl;
	for (int i = 0; i < osobe.size(); i++) {
		cout << osobe[i].getIme() << " " << osobe[i].getPrezime() << " " << osobe[i].getGodinaRodjenja() << endl;
	}

	Osoba pomoc;
	for (int i = 0; i < osobe.size(); i++) {
		for (int j = i + 1; j < osobe.size(); j++) {
			if (osobe[i].getGodinaRodjenja() > osobe[j].getGodinaRodjenja()) {
				pomoc = osobe[i];
			}
		}
	}

	cout << endl << "Najmlada osoba je: ";
	cout << pomoc.getIme() << " " << pomoc.getPrezime() << " " << pomoc.getGodinaRodjenja() << endl;

	return 0;
}