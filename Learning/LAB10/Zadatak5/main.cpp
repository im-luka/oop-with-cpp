#include<iostream>
#include<vector>
#include<functional>

using namespace std;

class Student {
public:
	string ime;
	string prezime;
	string jmbag;
	Student(string _ime, string _prezime, string _jmbag) {
		ime = _ime;
		prezime = _prezime;
		jmbag = _jmbag;
	}
};

vector<Student*> nadji(vector<Student> &vek, function<bool(Student*)> uvjet) {
	vector<Student*> salji;

	for (int i = 0; i < vek.size(); i++) {
		if (uvjet(&vek[i])) {
			salji.push_back(&vek[i]);
		}
	}

	return salji;
}

int main()
{
	vector<Student> v = {
		Student("Pero", "Peric", "3882"),
		Student("Ivo", "Ivic", "10991"),
		Student("Mara", "Maric", "40911"),
		Student("Ivan", "Juric", "93877"),
		Student("Ivo", "Kalic", "20991"),
	};

	vector<Student*> r = nadji(v, [](Student* s) {return s->ime == "Ivo"; });

	for (Student* s : r) {
		cout << s->ime << " " << s->prezime << " " << s->jmbag << endl;
	}

	return 0;
}