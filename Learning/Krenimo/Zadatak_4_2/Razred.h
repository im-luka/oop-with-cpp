#pragma once
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Ucenik
{
public:
	string ime;
	string prezime;
	Ucenik() {}
	Ucenik(string _ime, string _prezime) : ime(_ime), prezime(_prezime){}
};

class Razred
{
public:
	vector<Ucenik*> ucenici;
	float prosjecnaOcjena;

	Razred() {}

	Razred(const Razred& r) {
		for (int i = 0; i < r.ucenici.size(); i++) {
			ucenici.push_back(new Ucenik);
			*ucenici[i] = *r.ucenici[i];
		}
		prosjecnaOcjena = r.prosjecnaOcjena;
	}

	Razred& operator=(const Razred& r) {
		for (int i = 0; i < ucenici.size(); i++) {
			delete ucenici[i];
		}
		ucenici.clear();
		for (int i = 0; i < r.ucenici.size(); i++) {
			ucenici.push_back(new Ucenik);
			*ucenici[i] = *r.ucenici[i];
		}
		prosjecnaOcjena = r.prosjecnaOcjena;
		return *this;
	}

	Razred(Razred&& r) {
		for (int i = 0; i < r.ucenici.size(); i++) {
			ucenici.push_back(r.ucenici[i]);
			r.ucenici[i] = NULL;
		}
		prosjecnaOcjena = r.prosjecnaOcjena;
	}

	Razred& operator=(Razred&& r) {
		for (int i = 0; i < ucenici.size(); i++) {
			delete ucenici[i];
		}
		ucenici.clear();
		for (int i = 0; i < r.ucenici.size(); i++) {
			ucenici.push_back(r.ucenici[i]);
			r.ucenici[i] = NULL;
		}
		prosjecnaOcjena = r.prosjecnaOcjena;
		return *this;
	}
};

