#include <iostream>
#include "Student.h"
#include "Bodovi.h"
#include "Kolegij.h"

using namespace std;

void Sortiraj(vector<Bodovi>& inst);

int main()
{
	vector<Bodovi> OOPBodovi{
		Bodovi(Student("Ivana", "Ivic", "0027185612"), 25),
		Bodovi(Student("Ivica", "Ivanovic", "0246005654"), 20),   
		Bodovi(Student("Marko", "Markic", "0246004234"), 32)
	};
	Sortiraj(OOPBodovi);
	Kolegij OOP("Objektno orijentirano programiranje", OOPBodovi);

	cout << "Objektno orijentirano programiranje bodovi: " << endl;
	for (int i = 0; i < OOP.bodovi.size(); i++) {
		cout << OOP.bodovi[i].student.ime << " " << OOP.bodovi[i].student.prezime << " " << OOP.bodovi[i].student.jmbag << " " << OOP.bodovi[i].brBodova << endl;
	}

	return 0;
}

void Sortiraj(vector<Bodovi>& inst) {
	for (int i = 0; i < inst.size(); i++) {
		for (int j = i + 1; j < inst.size(); j++) {
			Bodovi pom;
			if (inst[i].brBodova > inst[j].brBodova) {
				pom = inst[i];
				inst[i] = inst[j];
				inst[j] = pom;
			}
		}
	}
}