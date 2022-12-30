#include "Racun.h"

int main()
{
	Racun racun;
	string x, y, z;
	cin >> x >> y >> z;

	racun.setBrojRacuna(x);
	racun.setTipKlijenta(y);
	racun.setTipRacuna(z);

	cout << endl << "----------------------------------------" << endl;

	cout << racun.getBrojRacuna() << " " << racun.getTipKlijenta() << " " << racun.getTipRacuna();

	return 0;
}