#include <iostream>
#include "Kompleksni.h"

using namespace std;

int main()
{
	int n;
	cout << "Unesi n: ";
	cin >> n;

	Kompleksni* polje = new Kompleksni[n];
	double* moduli = new double[n];

	for (int i = 0; i < n; i++) {
		cout << "Niz[" << i << "].re = ";
		cin >> polje[i].re;

		cout << "Niz[" << i << "].im = ";
		cin >> polje[i].im;
	}

	for (int i = 0; i < n; i++) {
		//double xvar;
		//xvar = Modul(polje[i]);
		moduli[i] = Modul(polje[i]);
	}

	cout << endl << "------------------------------------------------" << endl;
	for (int i = 0; i < n; i++) {
		cout << "Realni: " << polje[i].re << endl;
		cout << "Imaginarni: " << polje[i].im << endl;
		cout << endl;
	}

	cout << endl << "------------------------------------------------" << endl;
	for (int i = 0; i < n; i++) {
		cout << "Modul " << i << " = " << moduli[i] << endl;
	}

	return 0;
}