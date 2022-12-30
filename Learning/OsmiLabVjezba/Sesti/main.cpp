#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Korisnik {
protected:
	string ime;
	string prezime;
	string mail;
	vector<Sadrzaj> niz;

public:
	Korisnik(string _ime, string _prezime, string _mail) {
		ime = _ime;
		prezime = _prezime;
		mail = _mail;
	}
};

class Sadrzaj : public Korisnik{
protected:
	string datum;
	string vrijeme;
	string privatnost;

public:
	Sadrzaj(string _ime, string _prezime, string _mail, string _datum, string _vrijeme, string _privatnost) : Korisnik(_ime, _prezime, _mail) {
		datum = _datum;
		vrijeme = _vrijeme;
		privatnost = _privatnost;
	}
};

class Video : public Sadrzaj, public Korisnik {
protected:
	string url;
	string naslov;
	double trajanje;

public:
	Video(string _ime, string _prezime, string _mail, string _datum, string _vrijeme, string _privatnost, string _url, string _naslov, double _trajanje) : Korisnik(_ime, _prezime, _mail), Sadrzaj(_datum, _vrijeme, _privatnost) {
		url = _url;
		naslov = _naslov;
		trajanje = _trajanje;
	}
};

int main()
{


	return 0;
}