#pragma once
#include <iostream>
#include <string>
using namespace std;

class Racun
{
private:
	string brojRacuna;
	string tipKlijenta;
	string tipRacuna;

public:
	string getBrojRacuna() const;
	string getTipKlijenta() const;
	string getTipRacuna() const;

	void setBrojRacuna(string _brojRacuna);
	void setTipKlijenta(string _tipKlijenta);
	void setTipRacuna(string _tipRacuna);
};

