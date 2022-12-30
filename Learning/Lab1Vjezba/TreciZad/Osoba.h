#pragma once
#include <string>
#include <iostream>
using namespace std;

class Osoba
{
private:
	string ime;
	string prezime;
	int godinaRodjenja;

public:
	string getIme() const;
	string getPrezime() const;
	int getGodinaRodjenja() const;

	void setIme(string _ime);
	void setPrezime(string _prezime);
	void setGodinaRodjenja(int _godina);

	void Provjera(string& abcd);

	bool KolikoGodina(int g);
};

