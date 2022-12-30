#include "BankovniRacun.h"

int main()
{
	BankovniRacun racun;
	string x, y, z;

	cout << "Unesi broj racuna, tip klijenta i tip racuna: ";
	cin >> x;
	racun.setBrojRacuna(x);
	cin >> y;
	racun.setTipKlijenta(y);
	cin >> z;
	racun.setTipRacuna(z);

	cout << "Uspjesno uneseni podaci!";

	return 0;
}