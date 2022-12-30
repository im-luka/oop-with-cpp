#include<iostream>
#include<string>
using namespace std;

class Slika {
private:
	double cijena;
	static int brInst;
	static double ukupno;

public:
	Slika(double _cijena) {
		cijena = _cijena;
		ukupno += _cijena;
		brInst++;
	}

	static double ProsjecnaCijena() {
		return ukupno / brInst;
	}
};
int Slika::brInst = 0;
double Slika::ukupno = 0;

class Operacija {
	short br1;
	short br2;
	char oper;

public:
	Operacija(int _br1, int _br2, char _oper) {
		br1 = _br1;
		br2 = _br2;
		oper = _oper;
	}

	short rezultat() {
		short xvar;
		if (oper == '/' && br2 == 0) {
			throw br2;
		}
		if (oper == '+') {
			xvar = br1 + br2;
		}
		if (oper == '-') {
			xvar = br1 - br2;
		}
		if (oper == '*') {
			xvar = br1* br2;
		}
		if (oper == '/') {
			xvar = br1 / br2;
		}
		if (br1 > 0 && br2 > 0 && xvar < 0) {
			throw "integer overflow";
		}

		return xvar;
	}
};


class Osoba {
public:
	string ime;
	string prezime;
	Osoba(string _ime, string _prezime) : ime(_ime), prezime(_prezime) {}
	//friend class NadiIznimku;
};

class NadiIznimku {
public:
	string a;
	string b;
	NadiIznimku(Osoba o1) : a(o1.ime), b(o1.prezime) {}

	void ispis() {
		if (a.length() > 5) {
			throw a;
		}
		if (b.length() > 10) {
			throw 10;
		}
		if (a.length() < 6 && b.length() < 11) {
			cout << a << " " << b << endl;
		}
	}
};

class Objekt {
public:
	static int counter;
	static int id;

	Objekt() {
		id++;
		++counter;
		cout << "ID = " << id << " | Counter = " << counter << endl;
	}

	~Objekt() {
		counter--;
	}
};
int Objekt::counter = 0;
int Objekt::id = 0;

int main()
{
	Objekt obj1;
	Objekt niz[10];
	Objekt* p = new Objekt[10];
	delete[] p;
	cout << Objekt::counter << endl;

	Objekt zadnji;
	cout << zadnji.id << " " << zadnji.counter;


	//-----------------------------------------------------------------------
	//Osoba o1("Luka", "Lukiccccccccccccc");
	//Osoba o2("Petra", "Petric");

	//try {
	//	NadiIznimku(o1).ispis();
	//	//NadiIznimku(o2).ispis();
	//}
	//catch(string bla){
	//	cout << "Ime " << o1.ime << " ima vise od 5 znakova." << endl;
	//}
	//catch (int hej) {
	//	cout << "Prezime ima vise od " << hej << " znakova" << endl;
	//}

	//----------------------------------------------------------------
	//Slika Slika1(2000); 
	//Slika Slika2(3000); 
	//Slika Slika3(1800);
	//cout << Slika::ProsjecnaCijena() << " eura";

	//-------------------------------------------------------------
	//short a, b;
	//cin >> a >> b;
	//try {
	//	cout << Operacija(a, b, '+').rezultat() << endl;
	//	cout << Operacija(a, b, '-').rezultat() << endl;
	//	cout << Operacija(a, b, '*').rezultat() << endl;
	//	cout << Operacija(a, b, '/').rezultat() << endl;
	//}
	//catch (short br) {
	//	cout << "Nema dijeljenja s " << br << endl;
	//}
	//catch (const char* niz) {
	//	cout << niz;
	//}
	//catch (...) {
	//	cout << "Nepoznata iznimka." << endl;
	//}

	

	return 0;
}