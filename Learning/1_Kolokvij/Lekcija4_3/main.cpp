#include "Razred.h"
#include<iostream>

int main()
{
	Ucenik uc1("Lux", "Dule");
	Ucenik uc2("Johnny", "Cash");

	Razred r1;
	r1.ocjena = 4.5;
	r1.ucenici.push_back(&uc1);
	r1.ucenici.push_back(&uc2);

	cout << "Razred 1" << endl << "Ocjena: " << r1.ocjena << " Ucenici: ";
	for (int i = 0; i < r1.ucenici.size(); i++) {
		cout << r1.ucenici[i]->ime << " " << r1.ucenici[i]->prezime << ", ";
	}
	cout << endl;

	Razred r2 = Razred(r1);
	r2.ucenici[0]->ime = "Hello";
	cout << "Razred 1" << endl << "Ocjena: " << r1.ocjena << " Ucenici: ";
	for (int i = 0; i < r1.ucenici.size(); i++) {
		cout << r1.ucenici[i]->ime << " " << r1.ucenici[i]->prezime << ", ";
	}
	cout << endl;
	cout << "Razred 2" << endl << "Ocjena: " << r2.ocjena << " Ucenici: ";
	for (int i = 0; i < r2.ucenici.size(); i++) {
		cout << r2.ucenici[i]->ime << " " << r2.ucenici[i]->prezime << ", ";
	}
	cout << endl;

	return 0;
}