#include<iostream>
#include"Osoba.h"
#include "Student.h"

using namespace std;

int BrojStudenata(Student* p, int semestar);

int main()
{
	Student GrupaA[3];
	GrupaA[0].ime = "Lux";
	GrupaA[0].prezime = "Dule";
	GrupaA[0].oib = "23145643";
	GrupaA[0].nazivStudija = "TVZ";
	GrupaA[0].smjer = "Racunarstvo";
	GrupaA[0].semestar = 2;

	GrupaA[1].ime = "Petra";
	GrupaA[1].prezime = "Petric";
	GrupaA[1].oib = "52222643";
	GrupaA[1].nazivStudija = "EFZG";
	GrupaA[1].smjer = "Marketing";
	GrupaA[1].semestar = 8;

	GrupaA[2].ime = "Johnny";
	GrupaA[2].prezime = "Bravo";
	GrupaA[2].oib = "10192813";
	GrupaA[2].nazivStudija = "FOI";
	GrupaA[2].smjer = "Informatika";
	GrupaA[2].semestar = 2;

	cout << "Popis studenata: " << endl;
	for (int i = 0; i < 3; i++) {
		cout << GrupaA[i].ime << " " << GrupaA[i].prezime << " " << GrupaA[i].oib << " " << GrupaA[i].nazivStudija << " " << GrupaA[i].smjer << " " << GrupaA[i].semestar << endl;
	}
	cout << "-----------------------------------------------------" << endl;
	
	cout << "Unesi semestar: " << endl;
	int x;
	cin >> x;

	int bla = BrojStudenata(GrupaA, x);

	cout << bla << " studenta trenutno pohada " << x << ". semestar." << endl;

	return 0;
}

int BrojStudenata(Student* p, int semestar) {
	int xvar = 0;
	for (int i = 0; i < 3; i++) {
		if (p[i].semestar == semestar) {
			xvar++;
		}
	}
	return xvar;
}