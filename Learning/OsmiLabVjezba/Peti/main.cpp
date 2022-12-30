#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Racunalo {
public:
	string naziv;

	Racunalo(string _naziv) : naziv(_naziv) {}

	virtual void tipRacunala() = 0;
};

class Tablet : public Racunalo {
public:
	static int inc;

	Tablet(string _naziv) : Racunalo(_naziv) {}

	void tipRacunala() {
		inc++;
	}
};
int Tablet::inc = 0;

class Laptop : public Racunalo {
public:
	static int inc;

	Laptop(string _naziv) : Racunalo(_naziv) {}

	void tipRacunala() {
		inc++;
	}
};
int Laptop::inc = 0;

void AnalizaUcionice(vector<Racunalo*> ucionica, int* brTableta, int* brLaptopa, int* brAndroida, int* brWindowsa, int* brLinuxa);

int main()
{
	int brTableta = 0, brLaptopa = 0;
	int brAndroida = 0, brWindowsa = 0, brLinuxa = 0;

	Tablet Acer("Android"), Prestigio("Windows");
	Laptop Dell("Linux"), IBM("Windows"), Toshiba("Windows");

	vector<Racunalo*> Ucionica1 = { &Acer, &Prestigio, &Dell, &IBM, &Toshiba };

	AnalizaUcionice(Ucionica1, &brTableta, &brLaptopa, &brAndroida, &brWindowsa, &brLinuxa);

	return 0;
}

void AnalizaUcionice(vector<Racunalo*> ucionica, int* brTableta, int* brLaptopa, int* brAndroida, int* brWindowsa, int* brLinuxa) {
	Racunalo* r;
	int andr = 0, wind = 0, lin = 0;
	for (int i = 0; i < ucionica.size(); i++) {
		r = &*ucionica[i];
		r->tipRacunala();
		if (ucionica[i]->naziv == "Android") {
			andr++;
		}
		else if (r->naziv == "Windows") {
			wind++;
		}
		else if (r->naziv == "Linux") {
			lin++;
		}
	}
	Tablet t("Random");
	Laptop l("Random");
	*brTableta = t.inc;
	*brLaptopa = l.inc;
	*brAndroida = andr;
	*brWindowsa = wind;
	*brLinuxa = lin;

	cout << "Tablet: " << *brTableta << "\nLaptop: " << *brLaptopa << "\nAndroid: " << *brAndroida << "\nWindows: " << *brWindowsa << "\nLinux: " << *brLinuxa << endl;
}