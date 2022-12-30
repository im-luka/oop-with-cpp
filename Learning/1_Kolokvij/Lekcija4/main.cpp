#include "Ucionica.h"
#include<iostream>

int main()
{
	Student s1("Lux", "Dule");
	Student s2("Pero", "Blaz");

	Ucionica uc;
	uc.studenti.push_back(&s1);
	uc.studenti.push_back(&s2);

	Ucionica uc2 = uc;
	uc2.studenti[0]->ime = "Pax";
	for (int i = 0; i < uc.studenti.size(); i++) {
		cout << uc.studenti[i]->ime << " " << uc.studenti[i]->prezime << endl;
	}
	cout << "------------------------------------\n";
	for (int i = 0; i < uc2.studenti.size(); i++) {
		cout << uc2.studenti[i]->ime << " " << uc2.studenti[i]->prezime << endl;
	}
	cout << "------------------------------------\n";

	Ucionica uc3;
	uc3 = uc;
	uc3.studenti[0]->ime = "Johnny";
	for (int i = 0; i < uc.studenti.size(); i++) {
		cout << uc.studenti[i]->ime << " " << uc.studenti[i]->prezime << endl;
	}
	cout << "------------------------------------\n";
	for (int i = 0; i < uc3.studenti.size(); i++) {
		cout << uc3.studenti[i]->ime << " " << uc3.studenti[i]->prezime << endl;
	}
	cout << "------------------------------------\n";

	Ucionica uc4 = Ucionica(uc);
	uc4.studenti[0]->ime = "Hello";
	for (int i = 0; i < uc.studenti.size(); i++) {
		cout << uc.studenti[i]->ime << " " << uc.studenti[i]->prezime << endl;
	}
	cout << "------------------------------------\n";
	for (int i = 0; i < uc4.studenti.size(); i++) {
		cout << uc4.studenti[i]->ime << " " << uc4.studenti[i]->prezime << endl;
	}
	cout << "------------------------------------\n";

	Ucionica uc5;
	uc5 = Ucionica(uc);
	uc5.studenti[0]->ime = "Kefka";
	for (int i = 0; i < uc.studenti.size(); i++) {
		cout << uc.studenti[i]->ime << " " << uc.studenti[i]->prezime << endl;
	}
	cout << "------------------------------------\n";
	for (int i = 0; i < uc5.studenti.size(); i++) {
		cout << uc5.studenti[i]->ime << " " << uc5.studenti[i]->prezime << endl;
	}
	cout << "------------------------------------\n";


	return 0;
}