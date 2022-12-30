#include<iostream>
#include<string>

using namespace std;

class Osoba {
public:
	string ime;
	string prezime;
	string oib;

	Osoba(string oib) {
		this->oib = oib;
	}

	void RadniStatus() {
		cout << "Osoba nema radni status!" << endl;
	}
};

class Student : public Osoba {
public:
	string nazivStudija;
	string smjer;
	int semestar;

	Student(string _oib) : Osoba(_oib) {}

	void RadniStatus() {
		cout << "Redovni student\n";
	}
};

int main()
{
	Student GrupaA[3] = {
		Student("11111111"),
		Student("22222222"),
		Student("33333333")
	};



	return 0;
}

int BrojStudenata(Student* p, int semestar) {
	int suma = 0;
	for (int i = 0; i < 3; i++) {
		if (p[i].semestar == semestar) {
			suma++;
		}
	}
	return suma;
}