#pragma once
#include <string>
#include <vector>
#include "Predmet.h"
using namespace std;

class Garaza
{
private:
	int velicinaX;
	int velicinaY;
	bool automatskoUp;
	string lokacija;

public:
	vector<Predmet> predmet;

	int getVelicinaX();
	int getVelicinaY();
	bool getAutomatskoUp();
	string getLokacija();

	void setVelicinaX(int _velicinaX);
	void setVelicinaY(int _velicinaY);
	void setAutomatskoUp(string& _automatskoUp);
	void setLokacija(string& _lokacija);
};

