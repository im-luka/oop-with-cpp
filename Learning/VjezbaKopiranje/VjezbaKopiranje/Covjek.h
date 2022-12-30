#pragma once
#include <string>
using namespace std;

class Covjek
{
public:
	string ime;
	string prezime;
	Covjek(){}
	Covjek(string _ime, string _prezime) : ime(_ime), prezime(_prezime) {}

	//char* ime;

	//Covjek() {}
	//Covjek(const char* _ime) {
	//	ime = new char[20];
	//	strcpy_s(ime, 20, _ime);
	//}

	//Covjek(const Covjek& c) {
	//	ime = new char[20];
	//	strcpy_s(ime, 20, c.ime);
	//}

	//Covjek& operator = (const Covjek& c) {
	//	if (this != &c) {
	//		delete[] ime;
	//		ime = new char[20];
	//		strcpy_s(ime, 20, c.ime);
	//	}
	//	return *this;
	//}

	//~Covjek() {
	//	delete[] ime;
	//}
};

