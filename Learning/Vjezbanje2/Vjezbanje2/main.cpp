#include <iostream>
#include <vector>
#include "Kompleksni.h"

using namespace std;

void Sortirajj(vector<double> &polje, int n)
{
	double xvarr;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (polje[i] > polje[j]) {
				xvarr = polje[i];
				polje[i] = polje[j];
				polje[j] = xvarr;
			}
		}
	}
}

int main()
{
	int n;
	cout << "Unesi n: ";
	cin >> n;

	vector<Kompleksni> polje;
	vector<double> moduli;

	for (int i = 0; i < n; i++) {
		Kompleksni broj;
		cout << "niz[" << i << "].re = ";
		cin >> broj.re;
		cout << "niz[" << i << "].im = ";
		cin >> broj.im;

		polje.push_back(broj);
	}

	for (int i = 0; i < polje.size(); i++) {
		double pom;
		Kompleksni xvar;
		pom = xvar.Modul(polje[i].re, polje[i].im);
		moduli.push_back(pom);
	}

	cout << endl << "----------------------------------" << endl;

	for (int i = 0; i < polje.size(); i++) {
		cout << "Realni dio: " << polje[i].re << endl;
		cout << "Imaginarni dio: " << polje[i].im << endl << endl;
	}

	cout << endl << "----------------------------------" << endl;

	for (int i = 0; i < moduli.size(); i++) {
		cout << "Modul [" << i << "]: " << moduli[i] << endl;
	}

	cout << endl << "-------------------------------" << endl << "Nakon sorta: " << endl;

	Sortirajj(moduli, moduli.size());

	for (int i = 0; i < moduli.size(); i++) {
		cout << moduli[i] << endl;
	}

	return 0;
}