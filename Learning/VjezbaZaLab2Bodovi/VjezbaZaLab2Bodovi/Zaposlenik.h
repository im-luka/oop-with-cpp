#pragma once
#include<string>
#include<iostream>
#include<vector>
using namespace std;

class Zaposlenik
{
private:
	string ime;
	string prezime;
	int staz;

public:
	Zaposlenik();
	Zaposlenik(string _ime, string _prezime, int _staz) : ime(_ime), prezime(_prezime), staz(_staz){}

	string getIme() const;
	string getPrezime() const;
	int getStaz() const;

	void setIme(string _ime);
	void setPrezime(string _prezime);
	void setStaz(int _staz);
};

