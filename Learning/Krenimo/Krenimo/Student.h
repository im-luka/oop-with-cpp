#pragma once
#include<string>
#include <vector>
#include <iostream>
using namespace std;

class Student
{
public:
	string ime;
	string prezime;
	char* jmbag;

	Student(){}
	Student(string _ime, string _prezime, const char* _jmbag) {
		ime = _ime;
		prezime = _prezime;
		jmbag = new char[20];
		strcpy_s(jmbag, 20, _jmbag);
	}

	Student(const Student& s) {
		ime = s.ime;
		prezime = s.prezime;
		jmbag = new char[20];
		strcpy_s(jmbag, 20, s.jmbag);
	}

	Student& operator=(const Student& s) {
		if (this != &s) {
			delete[] jmbag;
			ime = s.ime;
			prezime = s.prezime;
			jmbag = new char[20];
			strcpy_s(jmbag, 20, s.jmbag);
		}
		return *this;
	}

	Student(Student&& s) {
		ime = s.ime;
		prezime = s.prezime;
		jmbag = s.jmbag;
		s.jmbag = NULL;
	}

	Student& operator =(Student&& s) {
		if (this != &s) {
			ime = s.ime;
			prezime = s.prezime;
			jmbag = s.jmbag;
			s.jmbag = NULL;
		}
		return *this;
	}

	~Student() {
		cout << "Obrisan objekt: " << this << endl;
	}
};

