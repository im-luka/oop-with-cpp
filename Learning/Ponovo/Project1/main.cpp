#include <iostream>
#include "Knjiga.h"
#include <vector>

using namespace std;

int main()
{
	vector<Knjiga> popis;

	Knjiga k1("Moby Dick", "Pero Peric", 150, true);
	popis.push_back(k1);
	Knjiga k2("Pero Kvrzica", "Ivo Ivic", 200, true);
	popis.push_back(k2);
	Knjiga k3("Vlakom putujem", "Malik Johnny", 75, false);
	popis.push_back(k3);
	Knjiga k4("Ognjeni", "John Travolta", 350, true);
	popis.push_back(k4);
	Knjiga k5("Veoma", "Jack Monarh", 220, false);
	popis.push_back(k5);

	for (int i = 0; i < popis.size(); i++) {
		for (int j = i + 1; j < popis.size(); j++) {
			Knjiga inst;
			if (popis[i].naslov > popis[j].naslov) {
				inst = popis[i];
				popis[i] = popis[j];
				popis[j] = inst;
			}
		}
	}

	for (int i = 0; i < popis.size(); i++) {
		popis[i].Ispis();
	}

	cout << endl << "-----------------------------------------" << endl;

	Knjiga* polje = new Knjiga[5];
	polje[0] = ("Moby Dick", "Pero Peric", 150, true);

	return 0;
}