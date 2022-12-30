#pragma once
#include<string>
#include<iostream>
using namespace std;

class Osoba
{
public:
	string ime;
	string prezime;
	string oib;

	Osoba() {}
	Osoba(string _ime, string _prezime) : ime(_ime), prezime(_prezime) {}
	Osoba(string _oib) {
		oib = _oib;
	}
	Osoba(string _ime, string _prezime, string _oib) {
		ime = _ime;
		prezime = _prezime;
		oib = _oib;
	}

	void RadniStatus();
};

