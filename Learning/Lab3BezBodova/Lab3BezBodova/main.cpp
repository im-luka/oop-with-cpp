#include <iostream>
#include "Firma.h"

using namespace std;

int main()
{
	Firma frm;
	string n, o, a;
	cout << "Unesi naziv, oib, adresu:";
	getline(cin, n);
	getline(cin, o);
	getline(cin, a);
	frm.setNaziv(n);
	frm.setOib(o);
	frm.setAdresa(a);

	cout << endl << "-------------------------------------------" << endl << frm.getNaziv() << " " << frm.getOib() << " " << frm.getAdresa() << endl;

	return 0;
}