#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Zaposlenik {
public:
	string ime;
	int prosjecnaPlaca;

	Zaposlenik(string _ime) : ime(_ime) {}

	void GetRadnoMjesto() {
		cout << "Unutar tvrtke" << endl;
	}

	virtual ~Zaposlenik() {
		cout << "A onda brisem zaposlenika! " << ime << endl;
	}
};

class Sef : public Zaposlenik {
public:
	Sef(string _ime) : Zaposlenik(_ime) {
		prosjecnaPlaca = 10000;
	}

	void GetRadnoMjesto() {
		cout << "Tvrtka - vlastiti ured\n";
	}

	~Sef() {
		cout << "Brisem sefa! " << ime << endl;
	}
};

class Programer : public Zaposlenik {
public:
	Programer(string _ime) : Zaposlenik(_ime) {
		prosjecnaPlaca = 7000;
	}

	void GetRadnoMjesto() {
		cout << "Tvrtka - zajednicki ured\n";
	}

	~Programer() {
		cout << "Prvo brisem programera! " << ime << endl;
	}
};

class VSSProgramer : public Programer {
public:
	VSSProgramer(string _ime) : Programer(_ime) {
		prosjecnaPlaca = 8000;
	}

	void GetRadnoMjesto() {
		cout << "Tvrtka - polu zajednicki ured\n";
	}

	~VSSProgramer() {
		cout << "Brisem i VSS-a! " << ime << endl;
	}
};

double ProsjecnaPlaca(vector<Zaposlenik*>tvrtka);

int main()
{
	Zaposlenik z1("Veljko");
	Sef s1("John");
	Programer p1("Johnny");
	VSSProgramer vs1("Hobert");

	z1.GetRadnoMjesto();
	s1.GetRadnoMjesto();
	p1.GetRadnoMjesto();
	vs1.GetRadnoMjesto();

	vector<Zaposlenik*> tvrtka = { &s1, &p1, &vs1 };

	int pomoc = ProsjecnaPlaca(tvrtka);
	cout << "Prosjecna placa je: " << pomoc << endl;

	Zaposlenik* z = new Programer("Ivica");
	delete[] z;

	return 0;
}

double ProsjecnaPlaca(vector<Zaposlenik*>tvrtka) {
	double suma = 0;
	for (int i = 0; i < tvrtka.size(); i++) {
		suma += tvrtka[i]->prosjecnaPlaca;
	}
	suma /= tvrtka.size();
	return suma;
}