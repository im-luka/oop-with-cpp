#include<iostream>
#include<string>
#include<vector>
using namespace std;

namespace Iznimka {
	class IznimkaTime {
	public:
		double broj;
		IznimkaTime(double _broj) : broj(_broj) {}

		void display() {
			cout << "trajanje pjesme je pre kratko!" << endl;
		}
	};
}

class Pjesma {
	string naziv;
	string zanr;
	double trajanje;
	static double ukupno;

public:
	static double ukupnoTrajanje() {
		return ukupno;
	}
	Pjesma() {
		ukupno += trajanje;
	}
	Pjesma(string _naziv, string _zanr, double _trajanje) {
		if (_trajanje > 1) {
			naziv = _naziv;
			zanr = _zanr;
			trajanje = _trajanje;
			ukupno += _trajanje;
		}
		else {
			try {
				if (_trajanje < 1) {
					throw Iznimka::IznimkaTime(_trajanje);
				}
			}
			catch (Iznimka::IznimkaTime iznimka) {
				iznimka.display();
			}
			catch (...) {
				cout << "Nepoznata iznimka!" << endl;
			}
		}
	}

	double getTrajanje() const;
	void setTrajanje(double _trajanje);
};
double Pjesma::ukupno = 0;

double Pjesma::getTrajanje() const {
	return trajanje;
}
void Pjesma::setTrajanje(double _trajanje) {
	if (_trajanje >= 1) {
		trajanje = _trajanje;
	}
	else {
		try {
			if (_trajanje <= 1) {
				throw Iznimka::IznimkaTime(_trajanje);
			}
		}
		catch (Iznimka::IznimkaTime iznimka) {
			iznimka.display();
		}
	}
}

class Playlist {
public:
	vector<Pjesma*> pjesme;
	Playlist(vector<Pjesma*> _pjesme) {
		for (int i = 0; i < _pjesme.size(); i++) {
			pjesme.push_back(new Pjesma);
			*pjesme[i] = *_pjesme[i];
		}
	}

	Playlist& operator=(const Playlist& p) {
		if (this != &p) {
			for (int i = 0; i < pjesme.size(); i++) {
				delete pjesme[i];
			}
			pjesme.clear();
			for (int i = 0; i < p.pjesme.size(); i++) {
				if (p.pjesme[i]->getTrajanje() < 3) {
					pjesme.push_back(new Pjesma);
					*pjesme[i] = *p.pjesme[i];
				}
			}
		}
		return *this;
	}

	~Playlist() {
		for (int i = 0; i < pjesme.size(); i++) {
			delete pjesme[i];
		}
		pjesme.clear();
	}
};

vector<Playlist> najvecaPlaylista(vector<Playlist> niz, int n) {
	vector<Playlist> vrati;
	for (int i = 0; i < niz.size(); i++) {
		for (int j = i + 1; j < niz.size(); j++) {
			if (niz[i].pjesme[i]->getTrajanje < niz[j].pjesme[j]->getTrajanje) {

			}
		}
	}
}

int main()
{
	Pjesma p1, p2;
	p1.setTrajanje(1.3);
	p2.setTrajanje(2.45);

	cout << Pjesma::ukupnoTrajanje() << endl;
}