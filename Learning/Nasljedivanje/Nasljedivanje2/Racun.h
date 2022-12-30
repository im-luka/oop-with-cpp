#pragma once
#include "Dokument.h"
#include "Stavka.h"
#include<vector>
using namespace std;

class Racun : public Dokument
{
public:
	int broj;
	string tip;
	vector<Stavka> popis;
	static int suma;
};
int Racun::suma = 0;
