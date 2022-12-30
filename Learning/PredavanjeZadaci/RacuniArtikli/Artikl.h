#include <iostream>
#include <string>
using namespace std;

class Artikl {
public:
	string naziv;
	int kolicina;
	int cijena;

	Artikl(){}
	Artikl(string _naziv, int _kolicina, int _cijena);
};