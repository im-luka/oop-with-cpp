#include <iostream>
#include "Student.h"

using namespace std;

double ProsjekOcjena(vector<Student> niz, string prdmt);

int main()
{
	int n;
	cout << "Unesi broj studenata: ";
	cin >> n;

	vector<Student> studenti;
	vector<Kolegij> predmeti;

	for (int i = 0; i < n; i++) {
		Student stud;
		cout << "Unesi ime i prezime " << i + 1 << ". studenta: ";
		cin >> stud.ime >> stud.prezime;
		studenti.push_back(stud);

		int m;
		cout << "Unesi broj kolegija studenta: ";
		cin >> m;
		for (int j = 0; j < m; j++) {
			Kolegij kolg;
			cout << "Unesi naziv i ocjenu za " << j + 1 << ". kolegij: ";
			cin >> kolg.naziv >> kolg.ocjena;
			studenti[i].kolegiji.push_back(kolg);
		}
	}

	for (int i = 0; i < n; i++) {
		cout << studenti[i].ime << " " << studenti[i].prezime << " ";
		for (int j = 0; j < studenti[i].kolegiji.size(); j++) {
			cout << studenti[i].kolegiji[j].naziv << " " << studenti[i].kolegiji[j].ocjena << " ";
		}
		cout << endl;
	}

	cout << "Unesi naziv kolegija: ";
	string naz;
	cin >> naz;

	double suma = ProsjekOcjena(studenti, naz);
	cout << "Prosjek ocjena iz kolegija " << naz << " iznosi: " << suma;

	return 0;
}

double ProsjekOcjena(vector<Student> niz, string prdmt)
{
	int brojac = 0;
	double suma = 0;
	for (int i = 0; i < niz.size(); i++) {
		for (int j = 0; j < niz[i].kolegiji.size(); j++) {
			if (niz[i].kolegiji[j].naziv == prdmt) {
				suma += niz[i].kolegiji[j].ocjena;
				brojac++;
			}
		}
	}
	suma /= brojac;
	return suma;
}