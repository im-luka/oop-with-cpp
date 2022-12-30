#pragma once
#include <string>
#include <iostream>
using namespace std;

class Osoba
{
private:
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

	void Provjera(string& imebla)
	{
		for (int i = 0; i < imebla.length(); i++) {
			if (imebla[i] >= 'A' && imebla[i] <= 'Z') {
				imebla[i] += 32;
			}
		}
		imebla[0] -= 32;
	}
};


