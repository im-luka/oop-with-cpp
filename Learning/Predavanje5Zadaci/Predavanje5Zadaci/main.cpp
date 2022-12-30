#include <iostream>
#include "Slika.h"
using namespace std;

int main()
{
	Slika slika1(2000);
	Slika slika2(3000);
	Slika slika3(1800);

	cout << Slika::ProsjecnaCijena() << " kuna" << endl;
	cout << slika1.ProsjecnaCijena() << " kuna" << endl;

	return 0;
}