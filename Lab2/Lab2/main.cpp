#include<iostream>
#include <string>
#include "Postrojba.h"
#include "Vojarna.h"

using namespace std;
using namespace GlavniStozer;

int main()
{
	Postrojba* po1 = new Postrojba("Napad", "Bojna", 200);
	Postrojba* po2 = new Postrojba("Obrana", "Satnija", 500);

	Vojarna v1("Alabama", "Heinzelova");
	v1.postrojbe.push_back(po1);
	v1.postrojbe.push_back(po2);

	cout << v1.naziv << " " << v1.adresa << " " << " | Postrojbe: ";
	for (int i = 0; i < v1.postrojbe.size(); i++) {
		cout << v1.postrojbe[i]->getNaziv() << ", " << v1.postrojbe[i]->getRang() << ", " << v1.postrojbe[i]->getBrVojn() << ", ";
	}

	Vojarna v2 = v1;
	cout << endl << "----------------" << endl;
	v2.postrojbe[0]->setBrVojn(5);
	cout << v1.naziv << " " << v1.adresa << " " << " | Postrojbe: ";
	for (int i = 0; i < v1.postrojbe.size(); i++) {
		cout << v1.postrojbe[i]->getNaziv() << ", " << v1.postrojbe[i]->getRang() << ", " << v1.postrojbe[i]->getBrVojn() << ", ";
	}
	cout << endl;
	cout << v2.naziv << " " << v2.adresa << " " << " | Postrojbe: ";
	for (int i = 0; i < v2.postrojbe.size(); i++) {
		cout << v2.postrojbe[i]->getNaziv() << ", " << v2.postrojbe[i]->getRang() << ", " << v2.postrojbe[i]->getBrVojn() << ", ";
	}

	Vojarna v3("Skostka", "Branimirova");
	v3 = Vojarna(v1);
	v3.postrojbe[1]->setBrVojn(31);

	return 0;
}