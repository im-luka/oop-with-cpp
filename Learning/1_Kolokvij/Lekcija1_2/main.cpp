#include <iostream>
#include "Student.h"

using namespace std;

double Prosjek(vector<Student> studenti, string ime) {
	double suma = 0;
	int brojac = 0;
	for (int i = 0; i < studenti.size(); i++) {
		for (int j = 0; j < studenti[i].popis.size(); j++) {
			if (ime == studenti[i].popis[j].naziv) {
				suma += studenti[i].popis[j].ocjena;
				brojac++;
			}
		}
	}
	return suma / brojac;
}

int main()
{
	int n;
	cout << "Unesi br studenta: ";
	cin >> n;

	vector<Student> studenti;
	int br;

	for (int i = 0; i < n; i++) {
		Student s;
		cout << "Unesi ime i prezime " << i+1 << ". studenta: ";
		cin >> s.ime >> s.prezime;
		cout << "Unesi broj kolegija: ";
		cin >> br;
		for (int j = 0; j < br; j++) {
			Kolegij kolegij;
			cout << "Unesi naziv i ocjenu za " << j+1 << ". kolegij: ";
			cin >> kolegij.naziv >> kolegij.ocjena;
			s.popis.push_back(kolegij);
		}
		studenti.push_back(s);
	}

	for (int i = 0; i < n; i++) {
		cout << "Ime i prezime studenta: " << studenti[i].ime << " " << studenti[i].prezime << " Kolegiji: ";
		for (int j = 0; j < studenti[i].popis.size(); j++) {
			cout << studenti[i].popis[j].naziv << " " << studenti[i].popis[j].ocjena << ", ";
		}
		cout << endl;
	}

	string ime;
	cout << "Unesi naziv kolegija: ";
	cin >> ime;

	cout << "Prosjek ocjena iz kolegija " << ime << " je: " << Prosjek(studenti, ime) << "%" << endl;

	return 0;
}