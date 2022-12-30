#include <iostream>
#include "Lokacija.h"

using namespace std;

int main()
{
	cout << "Unesi broj lokacija: ";
	int n;
	cin >> n;

	vector<Lokacija> niz;

	for (int i = 0; i < n; i++) {
		Lokacija lok;
		cout << "Unesi ime i prezime " << i+1 << ". osobe i x i y koordinatu:";
		cin >> lok.ime >> lok.prezime >> lok.koordinataX >> lok.koordinataY;
		niz.push_back(lok);
	}
	
	cout << endl << "--------------------------------------------------" << endl;

	cout << "Unesi broj pedalina: ";
	int m;
	cin >> m;

	for (int i = 0; i < m; i++) {
		Pedalina ped;
		int broj;
		cout << "Unesi redni broj lokacije kojoj pripada " << i + 1 << ". pedalina: ";
		cin >> broj;
		cout << "Unesi boju i kapacitet " << i + 1 << ". pedaline: ";
		cin >> ped.boja >> ped.kapacitet;

		niz[broj - 1].pedaline.push_back(ped);
	}

	cout << endl << "--------------------------------------------------" << endl;

	for (int i = 0; i < niz.size(); i++) {
		cout << niz[i].ime << " " << niz[i].prezime << " " << niz[i].koordinataX << " " << niz[i].koordinataY << " ";
		for (int j = 0; j < niz[i].pedaline.size(); j++) {
			if (j == (niz[i].pedaline.size() - 1)) {
				cout << niz[i].pedaline[j].boja << " " << niz[i].pedaline[j].kapacitet;
			}
			else {
				cout << niz[i].pedaline[j].boja << " " << niz[i].pedaline[j].kapacitet << ", ";
			}
		}
		cout << endl;
	}

	return 0;
}