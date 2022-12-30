#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Igrac {
public:
	string id;
	bool jelPocetnik;
	static int brPoc;
	friend class Igra;

public:
	Igrac(string _id, bool poc) {
		id = _id;
		jelPocetnik = poc;
		if (poc == true) {
			brPoc++;
		}
	}

	static int brojPocetnika() {
		return brPoc;
	}
};
int Igrac::brPoc = 0;

class IgracIznimka {
public:
	string id;

	IgracIznimka(string _id) {
		id = _id;
	}

	void poruka() {
		cout << "Igrac " << id << " postoji!" << endl;
	}
};

class Igra {
public:
	vector<Igrac> popis;

	friend ostream& operator<<(ostream& izlaz, Igra& i);

	Igra& Dodaj(Igrac igrac) {
		popis.push_back(igrac);
		return *this;
	}

	Igra& operator+=(const Igrac& ig) {
		popis.push_back(ig);
		return *this;
	}

	operator int() {
		int xvar = 0;
		for (int i = 0; i < popis.size(); i++) {
			xvar++;
		}
		return xvar;
	}
};

ostream& operator<<(ostream& izlaz, Igra& ig) {
	for (int i = 0; i < ig.popis.size(); i++) {
		izlaz << ig.popis[i].id << " ";
	}
	return izlaz;
}

int main()
{
	Igrac i1("12345", 1);
	Igrac i2("23345", 0);
	Igrac i3("44445", 0);
	Igrac i4("78965", 1);
	Igrac i5("22245", 1);

	cout << Igrac::brojPocetnika() << endl;

	Igra list;
	list.Dodaj(i1).Dodaj(i2).Dodaj(i3);

	try {
		int pom = 0;
		for (int i = 0; i < list.popis.size(); i++) {
			if (list.popis[i].id == i3.id) {
				pom = 1;
				throw IgracIznimka(i3.id);
			}
		}
		if (pom != 1) {
			list += i3;
		}
	}
	catch (IgracIznimka iznimka) {
		iznimka.poruka();
	}

	cout << list;


	return 0;
}