#pragma once
#include<string>
namespace GlavniStozer {
	class Postrojba;
}

using namespace std;

class GlavniStozer::Postrojba
{
	string naziv;
	string rang;
	int brVojn;

public:
	Postrojba() {}
	Postrojba(string _naziv, string _rang, int _brVojn) : naziv(_naziv), rang(_rang), brVojn(_brVojn) {}

	int getBrVojn() const;
	string getNaziv() const;
	string getRang() const;
	void setBrVojn(int _brVojn);
};

