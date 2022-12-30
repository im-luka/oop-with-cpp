#pragma once
#include <string>
#include<iostream>
using namespace std;

class BankovniRacun
{
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

