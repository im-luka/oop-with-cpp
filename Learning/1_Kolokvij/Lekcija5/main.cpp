#include "Slika.h"
#include<iostream>
using namespace std;

int main()
{
	Slika Slika1(2000);
	Slika Slika2(3000);
	Slika Slika3(1800);

	cout << Slika::ProsjecnaCijena() << " eura.\n";

	return 0;
}