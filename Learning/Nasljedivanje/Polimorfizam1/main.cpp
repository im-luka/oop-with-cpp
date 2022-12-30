#include<iostream>
#include<vector>
#include "Artikl.h"
#include "Kruh.h"
#include "Jabuka.h"

using namespace std;

int UkupnaCijena(vector<Artikl*> racun);

int main()
{
	Kruh BijeliKruh(2);
	Jabuka ZelenaJabuka(3);

	Artikl* art;
	art = &BijeliKruh;
	cout << art->getCijena() << endl;
	art = &ZelenaJabuka;
	cout << art->getCijena() << endl;

	cout << "---------------------------\n";

	vector<Artikl*>racun = { &BijeliKruh, &ZelenaJabuka };

	cout << "Ukupna cijena: " << UkupnaCijena(racun) << endl;

	return 0;
}

int UkupnaCijena(vector<Artikl*> racun) {
	int suma = 0;
	for (int i = 0; i < racun.size(); i++) {
		suma += racun[i]->getCijena();
	}
	return suma;
}