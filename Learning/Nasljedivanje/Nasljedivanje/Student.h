#pragma once
#include "Osoba.h"

class Student : public Osoba
{
public:
	string nazivStudija;
	string smjer;
	int semestar;

	Student() {}
	Student(string _ime, string _prezime) : Osoba(_ime, _prezime) {}
	Student(string _oib) : Osoba(_oib){}
	Student(string _ime, string _prezime, string _oib) : Osoba(_ime, _prezime, _oib) {}
	
	void RadniStatus() {
		cout << "Redovni student." << endl;
	}
};

