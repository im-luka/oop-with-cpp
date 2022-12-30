#include <iostream>
#include "Predmet.h"
#include "Garaza.h"

using namespace std;

int main()
{
	int n;
	cout << "Unesi n garaza: ";
	cin >> n;
	int x, y;
	string atu;
	string lok;

	vector<Garaza> garaze;

	for (int i = 0; i < n; i++) {
		Garaza inst;
		cout << "Unesi velicinu, podatak i lokaciju za " << i + 1 << ". garazu: ";
		cin >> x >> y >> atu;
		getline(cin, lok);
		inst.setVelicinaX(x);
		inst.setVelicinaY(y);
		inst.setAutomatskoUp(atu);
		inst.setLokacija(lok);
		garaze.push_back(inst);
	}

	int m;
	int redniBroj;
	string naz;
	int vr;

	vector<Predmet> predmeti;

	cout << "Unesi broj predmeta: ";
	cin >> m;
	for (int i = 0; i < m; i++) {
		Predmet inst;
		cout << "Unesi redni broj garaze u koju spada " << i + 1 << ". predmet: ";
		cin >> redniBroj;
		cout << "Unesi naziv i vrijednost predmeta: ";
		cin >> naz >> vr;
		inst.setNaziv(naz);
		inst.setVrijednost(vr);
		predmeti.push_back(inst);
		garaze[redniBroj - 1].predmet.push_back(inst);
	}

	cout << endl << "Ispis garaze i predmeta u njima: " << endl;
	for (int i = 0; i < garaze.size(); i++) {
		cout << garaze[i].getLokacija() << " " << garaze[i].getVelicinaX() << "x" << garaze[i].getVelicinaY() << " " << garaze[i].getAutomatskoUp() << " - predmeti: ";
		for (int j = 0; j < garaze[i].predmet.size(); j++) {
			cout << garaze[i].predmet[j].getNaziv() << " " << garaze[i].predmet[j].getVrijednost() << ", ";
		}
		cout << endl;
	}

	return 0;
}