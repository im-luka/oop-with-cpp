#pragma once
#include<string>
#include<iostream>
using namespace std;

class Osoba
{
	string ime;
	string prezime;
	int godina;

public:
	string getIme() const;
	string getPrezime() const;
	int getGodina() const;

	void setIme(string _ime);
	void setPrezime(string _prezime);
	void setGodina(int _godina);
};

