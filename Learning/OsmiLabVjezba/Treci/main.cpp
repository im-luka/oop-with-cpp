#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Artikl {
public:
	int kolicina;

	Artikl(int _kolicina) : kolicina(_kolicina) {}

	virtual int getCijena() = 0;
};

class Kruh : public Artikl {
public:
	static int cijena;

	Kruh(int _kolicina) : Artikl(_kolicina) {}

	int getCijena() {
		return kolicina * cijena;
	}
};
int Kruh::cijena = 10;

class Jabuka : public Artikl {
public:
	static int cijena;

	Jabuka(int _kolicina) : Artikl(_kolicina) {}

	int getCijena() {
		return kolicina * cijena;
	}
};
int Jabuka::cijena = 8;

int UkupnaCijena(vector<Artikl*> racun);

int main()
{
	Kruh BijeliKruh(2);
	Jabuka IdaredJabuka(3);

	cout << "Cijena kruha: " << BijeliKruh.getCijena() << endl;
	cout << "Cijena jabuke: " << IdaredJabuka.getCijena() << endl;

	vector<Artikl*> racun = { &BijeliKruh, &IdaredJabuka };

	cout << UkupnaCijena(racun) << endl;

	return 0;
}

int UkupnaCijena(vector<Artikl*> racun) {
	int suma = 0;
	for (int i = 0; i < racun.size(); i++) {
		suma += racun[i]->getCijena();
	}
	return suma;
}