#include<iostream>
#include "Kompleksni.h"

using namespace std;
void Modul(Kompleksni* polje, int n);

int main()
{
	int n;
	cout << "Unesi n: ";
	cin >> n;

	Kompleksni* polje = new Kompleksni[n];
	for (int i = 0; i < n; i++) {
		cout << "niz[" << i << "].re = ";
		cin >> polje[i].re;
		cout << "niz[" << i << "].im = ";
		cin >> polje[i].im;
	}

	for (int i = 0; i < n; i++) {
		cout << "Realni: " << polje[i].re << " Imaginarni: " << polje[i].im << endl;
	}

	Modul(polje, n);

	delete[] polje;

	return 0;
}

void Modul(Kompleksni* polje, int n)
{
	double* niz = new double[n];
	for (int i = 0; i < n; i++) {
		niz[i] = sqrt((polje[i].re * polje[i].re) + (polje[i].im * polje[i].im));
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			double pomoc;
			if (niz[i] > niz[j]) {
				pomoc = niz[i];
				niz[i] = niz[j];
				niz[j] = pomoc;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << "Modul: " << niz[i] << endl;
	}

	delete[] niz;
}