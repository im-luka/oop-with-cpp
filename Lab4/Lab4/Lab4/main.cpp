#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Zaposlenik {
public:
	string ime;
	double prosjecnaPlaca;
	string radnoMjesto;

	Zaposlenik(string _ime) : ime(_ime) {
		radnoMjesto = "Unutar tvrtke.";
	}

	const string GetRadnoMjesto() {
		return radnoMjesto;
	}

	virtual void IspisZaposlenika() = 0;

	virtual ~Zaposlenik() {
		cout << "A onda brisem zaposlenika: " << ime << endl;
	}
};

class Sef : public Zaposlenik {
public:
	Sef(string _ime) : Zaposlenik(_ime) {
		radnoMjesto = "Tvrtka - vlastiti ured.";
		prosjecnaPlaca = 10000;
	}

	const string GetRadnoMjesto() {
		return radnoMjesto;
	}

	void IspisZaposlenika() {
		cout << "Sef: " << ime << endl;
	}

	~Sef() {
		cout << "Prvo brisem sefa: " << ime << endl;
	}
};

class Programer : public Zaposlenik {
public:
	Programer(string _ime) : Zaposlenik(_ime) {
		radnoMjesto = "Tvrtka - zajednicki ured.";
		prosjecnaPlaca = 7000;
	}

	const string GetRadnoMjesto() {
		return radnoMjesto;
	}

	void IspisZaposlenika() {
		cout << "Programer: " << ime << endl;
	}

	~Programer() {
		cout << "Prvo brisem programera: " << ime << endl;
	}
};

class VSSProgramer : public Programer {
public:
	VSSProgramer(string _ime) : Programer(_ime) {
		radnoMjesto = "Tvrtka - zajednicki ured.";
		prosjecnaPlaca = 8000;
	}

	const string GetRadnoMjesto() {
		return radnoMjesto;
	}

	void IspisZaposlenika() {
		cout << "VSS Programer: " << ime << endl;
	}

	~VSSProgramer() {
		cout << "Prvo brisem VSS programera: " << ime << endl;
	}
};

double ProsjecnaPlaca(vector<Zaposlenik*> tvrtka);

int main()
{
	Programer p1("Johnny");
	p1.IspisZaposlenika();
	cout << p1.GetRadnoMjesto() << " " << p1.prosjecnaPlaca << endl;
	
	Sef s1("John");
	s1.IspisZaposlenika();
	cout << s1.GetRadnoMjesto() << " " << s1.prosjecnaPlaca << endl;

	VSSProgramer vs1("Veljko");
	vs1.IspisZaposlenika();
	cout << vs1.GetRadnoMjesto() << " " << vs1.prosjecnaPlaca << endl;

	vector<Zaposlenik*> tvrtka = { &s1, &p1, &vs1 };

	double pomoc = ProsjecnaPlaca(tvrtka);
	cout << "Ukupna prosjecna placa iznosi: " << pomoc << "kn" << endl;

	Zaposlenik* z = new Programer("Ivica");
	delete[] z;

	return 0;
}

double ProsjecnaPlaca(vector<Zaposlenik*> tvrtka) {
	Zaposlenik* z;
	double suma = 0;
	for (int i = 0; i < tvrtka.size(); i++) {
		z = &*tvrtka[i];
		suma += z->prosjecnaPlaca;
	}
	return suma / tvrtka.size(); //prof, nije mi jasno iz zadatka da li trebamo naci prosjecnu placu svih placa zajedno ili samo ukupnu placu... da se trazila ukupna placa return bi izgledao ovako: return suma;
}