#include <iostream>
#include "Stan.h"

using namespace std;

void ispodProsjecnaKvadratura(vector<Stan> inst);

int main()
{
	vector<Stan> popis;

	Stan s1("Samostalna kuća", "Garsonijera", "Beton", 40);
	popis.push_back(s1);
	Stan s2("Zgrada", "Jednosobni", "Drvo", 40);
	popis.push_back(s2);
	Stan s3("Zgrada u nizu", "Dvosobni", "Metal", 30);
	popis.push_back(s3);
	Stan s4("Zgrada", "Garsonijera", "Kamen", 30);
	popis.push_back(s4);
	Stan s5("Vila", "Garsonijera", "Drvo", 50);
	popis.push_back(s5);

	for (int i = 0; i < popis.size(); i++) {
		Stan ins;
		for (int j = i + 1; j < popis.size(); j++) {
			if (popis[i].povrsina < popis[j].povrsina) {
				ins = popis[i];
				popis[i] = popis[j];
				popis[j] = ins;
			}
		}
	}

	for (int i = 0; i < popis.size(); i++) {
		popis[i].Display();
	}


	cout << endl << "----------------------------------------------------------" << endl;
	Stan *polje = new Stan[5];
	polje[0] = s1;
	polje[1] = s2;
	polje[2] = s3;
	polje[3] = s4;
	polje[4] = s5;
	for (int i = 0; i < 5; i++) {
		cout << "Obrisan je stan: ";
		polje[i].Display();
	}
	delete[] polje;

	cout << endl << "----------------------------------------------------------" << endl;

	ispodProsjecnaKvadratura(popis);

	return 0;
}

void ispodProsjecnaKvadratura(vector<Stan> inst)
{
	double suma = 0;
	for (int i = 0; i < inst.size(); i++) {
		suma += inst[i].povrsina;
	}
	suma /= inst.size();
	cout << suma << endl;

	for (int i = 0; i < inst.size(); i++) {
		if (inst[i].povrsina < suma) {
			cout << inst[i].tip << " " << inst[i].kategorija << " " << inst[i].vrstaMaterijala << " " << inst[i].povrsina << endl;
		}
	}
}