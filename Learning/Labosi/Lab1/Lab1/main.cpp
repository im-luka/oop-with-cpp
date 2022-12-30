#include <iostream>
#include <vector>
#include "Predmet.h"
#include "Plaza.h"

using namespace std;

int main()
{
	int n;
	cout << "Unesi broj plaza: ";
	cin >> n;

	vector<Plaza> PopisPlaza(n);

	for (int i = 0; i < n; i++) {
		cout << "Unesi velicinu i lokaciju za " << i + 1 << ". plazu: ";
		cin >> PopisPlaza[i].Velicina >> PopisPlaza[i].KoordinataX >> PopisPlaza[i].KoordinataY;
	}

	int m;
	cout << "Unesi broj predmeta: ";
	cin >> m;

	vector<Predmet> PopisPredmeta(m);

	int brPlaze;

	for (int i = 0; i < m; i++) {
		cout << "Unesi redni broj plaze kojoj pripada " << i + 1 << " predmet: ";
		cin >> brPlaze;
		if (brPlaze > n) {
			cout << "Neispravan broj plaze!";
			return -1;
		}
		cout << "Unesi kolicinu i opis predmeta: ";
		cin >> PopisPredmeta[i].Kolicina >> PopisPredmeta[i].Opis;
		//getline(cin, PopisPredmeta[i].Opis);

		for (int j = 0; j < n; j++) {
			if (j + 1 == brPlaze) {
				PopisPlaza[j].NizPredmeta[j].Kolicina = PopisPredmeta[i].Kolicina;
				PopisPlaza[j].NizPredmeta[j].Opis = PopisPredmeta[i].Opis;
			}
		}
	}

	cout << endl << endl << "Popis plaza:" << endl;
	for (int i = 0; i < n; i++) {
		cout << i+1 << ". " << PopisPlaza[i].KoordinataX << " " << PopisPlaza[i].KoordinataY << " D=" << PopisPlaza[i].Velicina << " - predmeti: " << PopisPlaza[i].NizPredmeta[i].Kolicina << PopisPlaza[i].NizPredmeta[i].Opis;
	}

	return 0;
}