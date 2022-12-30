#include "Osoba.h"
using namespace std;

int main() 
{
	Osoba o1;
	string im, prez;
	int god;
	cin >> im >> prez >> god;

	o1.setIme(im);
	o1.setPrezime(prez);
	o1.setGodina(god);

	cout << o1.getIme() << " " << o1.getPrezime() << " " << o1.getGodina() << endl;

	return 0;
}