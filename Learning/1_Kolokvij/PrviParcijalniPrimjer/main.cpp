#include<iostream>
#include<string>
using namespace std;

class Osoba {
	string ime;
	string prezime;
	
public:
	Osoba() {}
	Osoba(string ime, string prezime) {
		this->ime = ime;
		this->prezime = prezime;
	}

	string getIme() const;
	string getPrezime() const;
	void setIme(string ime);
	void setPrezime(string prezime);

	friend void ispisOsobe(const Osoba& o);
};

void ispisOsobe(const Osoba& o) {
	cout << o.ime << " " << o.prezime << endl;
}

string Osoba::getIme() const {
	return ime;
}
string Osoba::getPrezime() const {
	return prezime;
}

void Osoba::setIme(string ime) {
	this->ime = ime;
}
void Osoba::setPrezime(string prezime) {
	this->prezime = prezime;
}


//--------------------------------------------------------------
class Klub {
public:
	string naziv;
	string adresa;
	Osoba* trener;

public:
	Klub() {}
	Klub(string naziv, string adresa) {
		this->naziv = naziv;
		this->adresa = adresa;
	}

	Klub(const Klub& k) {
		naziv = k.naziv;
		adresa = k.adresa;
		trener = new Osoba;
		*trener = *k.trener;
	}

	Klub& operator=(const Klub& k) {
		if (this != &k) {
			delete trener;
			naziv = k.naziv;
			adresa = k.adresa;
			trener = new Osoba;
			*trener = *k.trener;
		}
		return *this;
	}

	~Klub() {
		delete trener;
	}
};


//--------------------------------------------------------------
int main()
{
	Klub* k1 = new Klub("Real", "Konanovska 3");
	Osoba* o1 = new Osoba("Kiki", "Roni");

	k1->trener = o1;

	cout << "Osoba: " << o1->getIme() << " " << o1->getPrezime() << endl;
	cout << "Trener: " << k1->trener->getIme() << " " << k1->trener->getPrezime() << endl;

	Klub k2 = *k1;
	k2.trener->setIme("Zizu");
	cout << "Trener 1: " << k1->trener->getIme() << " " << k1->trener->getPrezime() << endl;
	cout << "Trener 2: " << k2.trener->getIme() << " " << k2.trener->getPrezime() << endl;

	return 0;
}