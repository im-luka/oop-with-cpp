#include<iostream>
#include<vector>
#include<functional>

using namespace std;

class Plovilo {
public:
	string vrsta;
	int godina;
	int trajanje;
	int brMotora;

	Plovilo(string _vrsta, int _godina, int _trajanje) {
		vrsta = _vrsta;
		godina = _godina;
		trajanje = _trajanje;
		brMotora = 1;
	}
};

class Marina {
public:
	vector<Plovilo> niz;

	Marina& operator +=(vector<Plovilo> pom)
	{
		for (int i = 0; i < pom.size(); i++)
			this->niz.push_back(pom[i]);
		return *this;
	}

	friend ostream& operator << (ostream& izlaz, Marina mar);
};

class Jahta : public Plovilo {
public:
	Jahta(string ime, int godina, int traj) : Plovilo(ime, godina, traj) {
		brMotora = 2;
	}
};

template<class T>
class SuhiVez {
public:
	vector<T> niz;

	template<class... TT>
	SuhiVez(TT... stavke) : niz({ stavke... }) {}
};

template <class T1, class T2>
auto Najbrzi(T1 x, T2 y) {
	if (x > y) {
		return x;
	}
	else {
		return y;
	}
}
template<class T1, class T2, class... TOS>
auto Najbrzi(T1 x, T2 y, TOS... z) {
	if (x > Najbrzi(y, z...)) {
		return x;
	}
	else {
		return Najbrzi(y, z...);
	}
}

double prosjecnoMotora(vector<Plovilo*> plo) {
	double xvar = 0;
	Plovilo* pl;
	for (int i = 0; i < plo.size(); i++) {
		pl = plo[i];
		xvar += pl->brMotora;
	}
	return xvar / plo.size();
}

Marina getPlovila(Marina mar, function<bool(int)> uvjet);

ostream& operator << (ostream& izlaz, Marina mar)
{
	for (int i = 0; i < mar.niz.size(); i++) {
		izlaz << mar.niz[i].vrsta << ", " << mar.niz[i].godina << endl;
	}
	return izlaz;
}

int main()
{
	Plovilo pl1("Gliser", 2015, 10);
	Plovilo pl2("Camac", 2010, 12);
	Plovilo pl3("Jedrenjak", 2017, 2);

	Marina marina;
	marina += {pl1, pl2, pl3};
	cout << marina << endl;

	Jahta jh1("Open", 2018, 12);
	Jahta jh2("Fly bridge", 2017, 10);
	vector<Plovilo*> pPlovilo = { &pl1, &pl2, &pl3, &jh1, &jh2 };
	cout << prosjecnoMotora(pPlovilo) << endl;
	cout << "--------------\n";

	cout << Najbrzi(150, 200) << endl; 
	cout << Najbrzi(210, 150, 200) << endl;
	cout << Najbrzi(210, 150, 250, 200) << endl;
	cout << "-----------------\n";

	return 0;
}