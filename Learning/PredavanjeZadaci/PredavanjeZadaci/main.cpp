#include <iostream>
#include "Kompleksni.h"

using namespace std;

double Modul(double x, double y);
void Sortiraj(double* niz, Kompleksni* niz2, int n);

int main()
{
	int n;
	cout << "Unesi n brojeva:";
	cin >> n;

	Kompleksni* polje = new Kompleksni[n];
	double* moduli = new double[n];

	for (int i = 0; i < n; i++) {
		Kompleksni inst;

		cout << "polje[" << i << "].re = ";
		cin >> inst.re;
		cout << "polje[" << i << "].img = ";
		cin >> inst.im;

		moduli[i] = Modul(inst.re, inst.im);
		polje[i] = inst;
	}

	Sortiraj(moduli, polje, n);

	for (int i = 0; i < n; i++) {
		cout << "Z (" << polje[i].re << "+" << polje[i].im << "i) Modul: " << moduli[i] << endl;
	}

	delete[] moduli;
	delete[] polje;

	return 0;
}

double Modul(double x, double y)
{
	if (x < 0) {
		x = -x;
	}
	if (y < 0) {
		y = -y;
	}
	return sqrt((x * x) + (y * y));
}

void Sortiraj(double* niz, Kompleksni* niz2, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			double pom;
			Kompleksni var;
			if (niz[i] < niz[j]) {
				pom = niz[i];
				var = niz2[i];
				niz[i] = niz[j];
				niz2[i] = niz2[j];
				niz[j] = pom;
				niz2[j] = var;
			}
		}
	}
}