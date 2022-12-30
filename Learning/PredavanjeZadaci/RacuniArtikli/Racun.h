#include <vector>
#include "Artikl.h"
using namespace std;

class Racun {
public:
	int redniBroj;
	vector<Artikl> popis;

	Racun(){}
	Racun(int _redniBroj);

	void dodaj(Artikl art);
	void ukupnaCijena();
	void najskuplji();
};