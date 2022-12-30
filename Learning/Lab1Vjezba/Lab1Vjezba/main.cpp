#include <iostream>
#include <vector>
#include "Plaza.h"
#include "Predmet.h"

using namespace std;

int main()
{
	int n;
	cout << "Unesi broj plaza: ";
	cin >> n;

	vector<Plaza> plaze;

	for (int i = 0; i < n; i++) {
		Plaza inst;
		cout << "Unesi velicinu i lokaciju " << i + 1 << " plaze: ";
		cin >> inst.velicina >> inst.kX >> inst.kY;
		plaze.push_back(inst);
	}

	int m, xvar;
	cout << "Unesi broj predmeta: ";
	cin >> m;

	for (int i = 0; i < m; i++) {
		Predmet inst;
		cout << "Unesi redni broj plaze kojoj pripada " << i + 1 << " predmet: ";
		cin >> xvar;
		cout << "Unesi kolicinu i naziv " << i + 1 << " predmeta: ";
		cin >> inst.kolicina >> inst.opis;
		plaze[xvar - 1].predmeti.push_back(inst);
	}

	cout << endl << "Ispis plaza i predmeta: " << endl;
	for (int i = 0; i < plaze.size(); i++) {
		cout << i + 1 << ". " << plaze[i].kX << " " << plaze[i].kY << " D = " << plaze[i].velicina << " - predmeti: ";
		for (int j = 0; j < plaze[i].predmeti.size(); j++) {
			cout << plaze[i].predmeti[j].kolicina << " " << plaze[i].predmeti[j].opis << " ";
		}
		cout << endl;
	}

	return 0;
}