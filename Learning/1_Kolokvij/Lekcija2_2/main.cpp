#include "Kolegij.h"
#include <iostream>

int main()
{
	vector<Bodovi> OOPBodovi{
		 Bodovi(Student("Ivana", "Ivic", "0246002475"), 25),
		 Bodovi(Student("Ivica", "Ivanovic", "0246005654"), 20),
		 Bodovi(Student("Marko", "Markic", "0246004234"), 32)
	};

	Kolegij OOP("Objektno orijentirano programiranje", OOPBodovi);

	Bodovi pomoc;
	for (int i = 0; i < OOP.bodovi.size(); i++) {
		for (int j = i + 1; j < OOP.bodovi.size(); j++) {
			if (OOP.bodovi[i].brojbodova > OOP.bodovi[j].brojbodova) {
				pomoc = OOP.bodovi[i];
				OOP.bodovi[i] = OOP.bodovi[j];
				OOP.bodovi[j] = pomoc;
			}
		}
	}

	for (int i = 0; i < OOP.bodovi.size(); i++) {
		cout << OOP.bodovi[i].stud.ime << " " << OOP.bodovi[i].stud.prezime << " " << OOP.bodovi[i].stud.jmbag << " " << OOP.bodovi[i].brojbodova << endl;
	}

	return 0;
}