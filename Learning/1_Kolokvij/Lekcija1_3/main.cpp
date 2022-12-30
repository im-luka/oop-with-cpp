#include "Garaza.h"
#include <iostream>

int main()
{
	cout << "Unesi broj garaza: ";
	int n;
	cin >> n;

	vector<Garaza> garaze;
	Garaza g;

	for (int i = 0; i < n; i++) {
		string pomoc;
		cout << "Unesi velicinu, lokaciju i bool za " << i + 1 << ". garazu: ";
		cin >> g.velicinaX >> g.velicinaY >> g.lokacija >> pomoc;
		if (pomoc == "da") {
			g.autom = true;
		}
		else {
			g.autom = false;
		}
		garaze.push_back(g);
	}

	cout << "Unesi broj predmeta: ";
	int m;
	cin >> m;

	vector<Predmet> predmeti;
	int br;

	for (int i = 0; i < m; i++) {
		Predmet p;
		cout << "Unesi naziv i vrijednost " << i + 1 << ". predmeta: ";
		cin >> p.naziv >> p.vrijednost;
		cout << "Unesi broj garaze kojoj pripada " << i + 1 << ". predmet: ";
		cin >> br;
		garaze[br-1].predmeti.push_back(p);
	}

	cout << "Ispis garaza i predmeta: " << endl;
	for (int i = 0; i < garaze.size(); i++) {
		cout << i + 1 << ". " << garaze[i].lokacija << " " << garaze[i].velicinaX << "x" << garaze[i].velicinaY << " - Predmeti: ";
		for (int j = 0; j < garaze[i].predmeti.size(); j++) {
			if (j == garaze[i].predmeti.size() - 1) {
				cout << garaze[i].predmeti[j].naziv << " " << garaze[i].predmeti[j].vrijednost << endl;
			}
			else {
				cout << garaze[i].predmeti[j].naziv << " " << garaze[i].predmeti[j].vrijednost << ", ";
			}
		}
	}
 
	return 0;
}