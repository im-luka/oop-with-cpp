#include "Tvrtka.h"

int main()
{
	Zaposlenik z1("Lux", "Dule", 10);
	Zaposlenik z2;
	z2.setIme("Johnny");
	z2.setPrezime("Kefka");
	z2.setStaz(38);
	cout << z1.getIme() << " " << z1.getPrezime() << " " << z1.getStaz() << endl;
	cout << z2.getIme() << " " << z2.getPrezime() << " " << z2.getStaz() << endl;
	cout << "---------------------------------------" << endl;

	Tvrtka tv1("56473821", "BMW", "Heinzelova");
	tv1.zaposlenici.push_back(&z1);
	tv1.zaposlenici.push_back(&z2);
	cout << "TVRTKA 1" << endl;
	cout << tv1.oib << " " << tv1.naziv << " " << tv1.adresa << " | Zaposlenici: ";
	for (int i = 0; i < tv1.zaposlenici.size(); i++) {
		cout << tv1.zaposlenici[i]->getIme() << " " << tv1.zaposlenici[i]->getPrezime() << " " << tv1.zaposlenici[i]->getStaz() << ", ";
	}
	cout << endl << "---------------------------------------" << endl;

	cout << "KOPIRNI KONSTRUKTOR TEST" << endl;
	Tvrtka tv2 = tv1;
	cout << "TVRTKA 2" << endl;
	cout << tv2.oib << " " << tv2.naziv << " " << tv2.adresa << " | Zaposlenici: ";
	for (int i = 0; i < tv2.zaposlenici.size(); i++) {
		cout << tv2.zaposlenici[i]->getIme() << " " << tv2.zaposlenici[i]->getPrezime() << " " << tv2.zaposlenici[i]->getStaz() << ", ";
	}
	cout << endl << "---------------------------------------" << endl;

	cout << "NAKON PROMJENE IMENA ZAPOSLENIKA KOD TVRTKE 2" << endl;
	tv2.zaposlenici[0]->setIme("Russell");
	cout << "TVRTKA 1" << endl;
	cout << tv1.oib << " " << tv1.naziv << " " << tv1.adresa << " | Zaposlenici: ";
	for (int i = 0; i < tv1.zaposlenici.size(); i++) {
		cout << tv1.zaposlenici[i]->getIme() << " " << tv1.zaposlenici[i]->getPrezime() << " " << tv1.zaposlenici[i]->getStaz() << ", ";
	}
	cout << endl << "TVRTKA 2" << endl;
	cout << tv2.oib << " " << tv2.naziv << " " << tv2.adresa << " | Zaposlenici: ";
	for (int i = 0; i < tv2.zaposlenici.size(); i++) {
		cout << tv2.zaposlenici[i]->getIme() << " " << tv2.zaposlenici[i]->getPrezime() << " " << tv2.zaposlenici[i]->getStaz() << ", ";
	}

	cout << endl << endl << "OPERATOR PRIDRUZIVANJA KOPIRNOG KONSTRUKTORA TEST" << endl;
	Tvrtka tv3("111111", "capital", "Miranovksa");
	tv3 = tv1;
	cout << "TVRTKA 3" << endl;
	cout << tv3.oib << " " << tv3.naziv << " " << tv3.adresa << " | Zaposlenici: ";
	for (int i = 0; i < tv3.zaposlenici.size(); i++) {
		cout << tv3.zaposlenici[i]->getIme() << " " << tv3.zaposlenici[i]->getPrezime() << " " << tv3.zaposlenici[i]->getStaz() << ", ";
	}
	cout << endl << "---------------------------------------" << endl;

	cout << "NAKON PROMJENE PREZIMENA ZAPOSLENIKA KOD TVRTKE 3" << endl;
	tv3.zaposlenici[1]->setPrezime("Johnson");
	cout << "TVRTKA 1" << endl;
	cout << tv1.oib << " " << tv1.naziv << " " << tv1.adresa << " | Zaposlenici: ";
	for (int i = 0; i < tv1.zaposlenici.size(); i++) {
		cout << tv1.zaposlenici[i]->getIme() << " " << tv1.zaposlenici[i]->getPrezime() << " " << tv1.zaposlenici[i]->getStaz() << ", ";
	}
	cout << endl << "TVRTKA 3" << endl;
	cout << tv3.oib << " " << tv3.naziv << " " << tv3.adresa << " | Zaposlenici: ";
	for (int i = 0; i < tv3.zaposlenici.size(); i++) {
		cout << tv3.zaposlenici[i]->getIme() << " " << tv3.zaposlenici[i]->getPrezime() << " " << tv3.zaposlenici[i]->getStaz() << ", ";
	}

	cout << endl << endl << "OPERATOR PRIDRUZIVANJA KOD SEMANTIKE PRIJENOSA TEST" << endl;
	Tvrtka tv4("33333333", "mojkompovi", "Jablanova");
	tv4 = Tvrtka(tv1);
	cout << "TVRTKA 4" << endl;
	cout << tv4.oib << " " << tv4.naziv << " " << tv4.adresa << " | Zaposlenici: ";
	for (int i = 0; i < tv4.zaposlenici.size(); i++) {
		cout << tv4.zaposlenici[i]->getIme() << " " << tv4.zaposlenici[i]->getPrezime() << " " << tv4.zaposlenici[i]->getStaz() << ", ";
	}
	cout << endl << "---------------------------------------" << endl;

	cout << "NAKON PROMJENE IMENA ZAPOSLENIKA KOD TVRTKE 4" << endl;
	tv4.zaposlenici[1]->setIme("Gogy");
	cout << "TVRTKA 1" << endl;
	cout << tv1.oib << " " << tv1.naziv << " " << tv1.adresa << " | Zaposlenici: ";
	for (int i = 0; i < tv1.zaposlenici.size(); i++) {
		cout << tv1.zaposlenici[i]->getIme() << " " << tv1.zaposlenici[i]->getPrezime() << " " << tv1.zaposlenici[i]->getStaz() << ", ";
	}
	cout << endl << "TVRTKA 4" << endl;
	cout << tv4.oib << " " << tv4.naziv << " " << tv4.adresa << " | Zaposlenici: ";
	for (int i = 0; i < tv4.zaposlenici.size(); i++) {
		cout << tv4.zaposlenici[i]->getIme() << " " << tv4.zaposlenici[i]->getPrezime() << " " << tv4.zaposlenici[i]->getStaz() << ", ";
	}

	return 0;
};