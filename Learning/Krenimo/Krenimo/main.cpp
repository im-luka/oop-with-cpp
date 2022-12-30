#include "Student.h"

using namespace std;

int main()
{
	Student s1("Lux", "Dule", "0056473214"), s2("Johnny", "Kefka", "0099999999");
	s2 = s1;
	cout << "Student 1: " << s1.ime << " " << s1.prezime << " " << s1.jmbag << " " << &s1 << endl;
	cout << "Student 2: " << s2.ime << " " << s2.prezime << " " << s2.jmbag << " " << &s2 << endl;
	strcpy_s(s2.jmbag, 20, "12341111");
	cout << "Student 1: " << s1.ime << " " << s1.prezime << " " << s1.jmbag << " " << &s1 << endl;
	cout << "Student 2: " << s2.ime << " " << s2.prezime << " " << s2.jmbag << " " << &s2 << endl;

	Student s3 = move(Student(s1));
	cout << "Student 1: " << s1.ime << " " << s1.prezime << " " << s1.jmbag << " " << &s1 << endl;
	cout << "Student 3: " << s3.ime << " " << s3.prezime << " " << s3.jmbag << " " << &s3 << endl;
	strcpy_s(s3.jmbag, 20, "555555555");
	cout << "Student 1: " << s1.ime << " " << s1.prezime << " " << s1.jmbag << " " << &s1 << endl;
	cout << "Student 3: " << s3.ime << " " << s3.prezime << " " << s3.jmbag << " " << &s3 << endl;

	Student s4;
	s4 = Student(s1);
	cout << "Student 1: " << s1.ime << " " << s1.prezime << " " << s1.jmbag << " " << &s1 << endl;
	cout << "Student 4: " << s4.ime << " " << s4.prezime << " " << s4.jmbag << " " << &s4 << endl;
	strcpy_s(s4.jmbag, 20, "3030303030");
	cout << "Student 1: " << s1.ime << " " << s1.prezime << " " << s1.jmbag << " " << &s1 << endl;
	cout << "Student 4: " << s4.ime << " " << s4.prezime << " " << s4.jmbag << " " << &s4 << endl;


	return 0;
}