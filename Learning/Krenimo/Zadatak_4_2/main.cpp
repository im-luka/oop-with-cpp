#include "Razred.h"

int main()
{
	Ucenik uc1("Ivo", "Ivic");
	Ucenik uc2("Pero", "Peric");
	cout << uc1.ime << " " << uc1.prezime << " " << &uc1 << endl;
	cout << uc2.ime << " " << uc2.prezime << " " << &uc2 << endl;
	cout << "------------------------------------" << endl;

	//DVA OBJEKTA KLASE RAZRED (JEDAN VEKTOR -> JEDAN UCENIK)
	//Razred raz1;
	//Razred raz2;
	//raz1.ucenici.push_back(&uc1);
	//raz1.prosjecnaOcjena = 4.5;
	//raz2.ucenici.push_back(&uc2);
	//raz2.prosjecnaOcjena = 3.7;
	//cout << raz1.ucenici[0]->ime << " " << raz1.ucenici[0]->prezime << " " << raz1.prosjecnaOcjena << " " << &raz1 << endl;
	//cout << raz2.ucenici[0]->ime << " " << raz2.ucenici[0]->prezime << " " << raz2.prosjecnaOcjena << " " << &raz2 << endl;
	//cout << "------------------------------------" << endl;

	//JEDAN OBJEKT KLASE RAZRED (JEDAN VEKTOR -> DVA UCENIKA)
	Razred raz1;
	raz1.ucenici.push_back(&uc1);
	raz1.ucenici.push_back(&uc2);
	raz1.prosjecnaOcjena = 4.5;
	cout << "Ucenici: " << raz1.ucenici[0]->ime << " " << raz1.ucenici[0]->prezime << ", " << raz1.ucenici[1]->ime << " " << raz1.ucenici[1]->prezime << endl;
	cout << "Ocjena: " << raz1.prosjecnaOcjena << " | Adresa: " << &raz1 << endl;
	cout << "------------------------------------" << endl;

	raz1.ucenici[0]->ime = raz1.ucenici[1]->ime;
	raz1.ucenici[0]->ime = "Duro";
	cout << "Ucenici: " << raz1.ucenici[0]->ime << " " << raz1.ucenici[0]->prezime << ", " << raz1.ucenici[1]->ime << " " << raz1.ucenici[1]->prezime << endl;
	cout << "Ocjena: " << raz1.prosjecnaOcjena << " | Adresa: " << &raz1 << endl;
	cout << "------------------------------------" << endl;

	return 0;
}