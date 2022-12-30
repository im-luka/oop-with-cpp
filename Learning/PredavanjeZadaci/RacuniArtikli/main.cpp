#include "Artikl.h"
#include "Kupac.h"
#include "Racun.h"

using namespace std;

int main()
{
	Kupac Ante(Racun(1));
	Ante.racun.dodaj(Artikl("Jabuka", 1, 6));
	Ante.racun.dodaj(Artikl("Banana", 2, 7.5));  
	Ante.racun.dodaj(Artikl("Coca cola 2l", 2, 10)); 
	cout << "Ukupno: " << Ante.racun.ukupnaCijena << " kn" << endl;

	cout << "Najskuplje placeni artikl je: " << Ante.racun.najskuplji << endl;

	return 0;
}