#include<iostream>
#include<vector>
#include<functional>

using namespace std;

class Grad {
public:
	string grad;
	int populacija;
	string drzava;
	Grad(string _grad, int _populacija, string _drzava) {
		grad = _grad;
		populacija = _populacija;
		drzava = _drzava;
	}
};

vector<Grad*> nadji(vector<Grad> &vek, function<bool(Grad*)> uvjet)
{
	vector<Grad*> salji;
	for (int i = 0; i < vek.size(); i++) {
		if (uvjet(&vek[i])) {
			salji.push_back(&vek[i]);
		}
	}

	return salji;
}

int main()
{
	vector<Grad> v = { 
		Grad("Zagreb", 900000, "Hrvatska"),
		Grad("Berlin", 2500000, "Njemacka"),
		Grad("Graz", 1200000, "Austrija"),
		Grad("Frankfurt", 2300000, "Njemacka") 
	};

	vector<Grad*> r = nadji(v, [](Grad* s) { return s->drzava == "Njemacka"; });

	for (Grad* p : r) {
		cout << p->grad << " " << p->populacija << " " << p->drzava << endl;
	}

	return 0;
}