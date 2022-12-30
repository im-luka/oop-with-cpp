#pragma once
#include <string>
using namespace std;

class Predmet
{
private:
	string naziv;
	int vrijednost;

public:
	string getNaziv();
	int getVrijednost();

	void setNaziv(string& _naziv);
	void setVrijednost(int _vrijednost);
};

