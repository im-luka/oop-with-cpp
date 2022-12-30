#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Stavka {
public:
	string usluga;
	int kolicina;
	int cijena;

	Stavka(string _usluga, int _kolicina, int _cijena) {
		usluga = _usluga;
		kolicina = _kolicina;
		cijena = _cijena;
	}
};

class Dokument {
public:
	string autor;
	string datum;
	string vrijeme;
	string id;

	Dokument(string _autor, string _datum, string _vrijeme, string _id) {
		autor = _autor;
		datum = _datum;
		vrijeme = _vrijeme;
		id = _id;
	}
};

class Racun : public Dokument {
public:
	string jir;
	string tip;
	vector<Stavka> popis;

	Racun(string _autor, string _datum, string _vrijeme, string _id, string _jir, string _tip) : Dokument(_autor, _datum, _vrijeme, _id) {
		jir = _jir;
		tip = _tip;
	}
};

int ukupnaSuma(vector<Stavka> popis);
double popust(Racun& racun, int pop);
void Ispis(Racun racun);

int main()
{
	Racun r1("Ivo Ivic", "01.01.2020.", "14:05", "11111111", "BLA234BLA", "R1");
	r1.popis = {
		Stavka("Clanska", 2, 100),
		Stavka("Usluga ciscenja", 1, 200),
		Stavka("Kupovina", 5, 13)
	};

	Racun r2("Pero Peric", "07.04.2019.", "08:45", "22222222", "HEY1928LLO", "Obicni");
	r2.popis = {
		Stavka("Auto", 1, 25000),
		Stavka("Kruh", 4, 8),
		Stavka("Mlijeko", 2, 10),
		Stavka("Zvake", 5, 5)
	};

	int uk1 = ukupnaSuma(r1.popis);
	int uk2 = ukupnaSuma(r2.popis);

	cout << "Ukupna cijena 1. racuna (prije popusta): " << uk1 << endl;
	cout << "Ukupna cijena 2. racuna (prije popusta): " << uk2 << endl;

	int p;
	cout << "Unesi postotak popusta koji zelis na svaki proizvod (izmedu 0 i 99%): ";
	cin >> p;
	double pk1 = popust(r1, p);
	double pk2 = popust(r2, p);

	cout << endl << "Ukupna cijena 1. racuna (poslije popusta): " << pk1 << endl;
	cout << "Ukupna cijena 2. racuna (poslije popusta): " << pk2 << endl;

	cout << endl << "Ispis: " << endl;
	Ispis(r1);
	Ispis(r2);

	return 0;
}

int ukupnaSuma(vector<Stavka> popis) {
	int suma = 0;
	for (int i = 0; i < popis.size(); i++) {
		suma += popis[i].kolicina * popis[i].cijena;
	}
	return suma;
}

double popust(Racun& racun, int pop) {
	double popust = (double)(100 - pop) / 100;
	double suma = 0;

	for (int i = 0; i < racun.popis.size(); i++) {
		racun.popis[i].cijena *= popust;
		suma += racun.popis[i].cijena * racun.popis[i].kolicina;
	}
	return suma;
}

void Ispis(Racun racun) {
	cout << racun.autor << " " << racun.datum << " " << racun.vrijeme << " " << racun.id << " " << racun.jir << " " << racun.tip << " | Stavke: ";
	for (int i = 0; i < racun.popis.size(); i++) {
		cout << racun.popis[i].usluga << " " << racun.popis[i].cijena << " " << racun.popis[i].kolicina << ", ";
	}
	cout << endl;
}