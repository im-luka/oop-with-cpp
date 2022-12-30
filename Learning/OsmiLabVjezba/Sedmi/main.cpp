//#include<iostream>
//#include<string>
//#include<vector>
//
//using namespace std;
//
//class Osoba {
//public:
//	string ime;
//	string prezime;
//	double placa;
//
//	Osoba(string _ime, string _prezime, double _placa) {
//		ime = _ime;
//		prezime = _prezime;
//		placa = _placa;
//	}
//
//	virtual void ispis() = 0;
//	virtual double izracunPlace() = 0;
//};
//
//class Igrac : public Osoba {
//public:
//	int golovi;
//	int asistencije;
//	double pomocnaPlaca;
//
//	Igrac(string _ime, string _prezime, double _placa) : Osoba(_ime, _prezime, _placa) {
//		pomocnaPlaca = _placa;
//	}
//
//	void dodajGolove(int x) {
//		golovi = x;
//		x /= 10;
//		double pomoc = pomocnaPlaca * 0.1;
//		for (int i = 0; i < x; i++) {
//			placa += pomoc;
//		}
//	}
//
//	void dodajAsistencije(int x) {
//		asistencije = x;
//		x /= 5;
//		double pomoc = pomocnaPlaca * 0.1;
//		for (int i = 0; i < x; i++) {
//			placa += pomoc;
//		}
//	}
//
//	void ispis() {
//		cout << ime << " " << prezime << " - golova: " << golovi << " asistencije: " << asistencije << endl;
//	}
//
//	double izracunPlace() {
//		return placa;
//	}
//};
//
//class Trener : public Osoba {
//public:
//	static int pobjeda;
//	int remi;
//	int izgubljena;
//	double pomocnaPlaca;
//
//	Trener(string _ime, string _prezime, double _placa) : Osoba(_ime, _prezime, _placa) {
//		pomocnaPlaca = _placa;
//	}
//
//	void dodajPobjede(int x) {
//		if (pobjeda == 0) {
//			pobjeda = x;
//		}
//		else {
//			pobjeda += x;
//		}
//		x /= 5;
//		double pomoc = pomocnaPlaca * 0.1;
//		for (int i = 0; i < x; i++) {
//			placa += pomoc;
//		}
//	}
//
//	void dodajRemi(int x) {
//		remi = x;
//		x /= 10;
//		double pomoc = pomocnaPlaca * 0.1;
//		for (int i = 0; i < x; i++) {
//			placa += pomoc;
//		}
//	}
//
//	void dodajIzgubljena(int x) {
//		izgubljena = x;
//		x /= 8;
//		double pomoc = pomocnaPlaca * 0.1;
//		for (int i = 0; i < x; i++) {
//			placa -= pomoc;
//		}
//	}
//
//	void ispis() {
//		cout << ime << " " << prezime << " - Omjer (W/D/L): " << pobjeda << "/" << remi << "/" << izgubljena << endl;
//	}
//
//	double izracunPlace() {
//		return placa;
//	}
//};
//int Trener::pobjeda = 0;
//
//int main()
//{
//	Igrac i("Luka", "Modric", 100000);
//	i.dodajGolove(7);
//	i.dodajAsistencije(12);
//	i.ispis();
//	cout << "Placa: " << i.izracunPlace() << endl;
//
//	Igrac i2("Cristiano", "Ronaldo", 234505);
//	i2.dodajGolove(57);
//	i2.dodajAsistencije(32);
//	i2.ispis();
//	cout << "Placa: " << i2.izracunPlace() << endl;
//
//	Trener t1("Jose", "Mourinho", 143009);
//	t1.dodajPobjede(88);
//	t1.dodajRemi(12);
//	t1.dodajIzgubljena(0);
//	t1.ispis();
//	cout << "Placa: " << t1.izracunPlace() << endl;
//
//	t1.dodajPobjede(11);
//	t1.dodajIzgubljena(47);
//	t1.ispis();
//	cout << "Placa: " << t1.izracunPlace() << endl;
//
//	return 0;
//}

//#include <iostream>
//#include <math.h>
//using namespace std;
//class Osoba {
//protected:
//    string ime;
//    string prezime;
//    double osnovica;
//public:
//    Osoba(string _ime, string _prezime, double _osnovica) {
//        ime = _ime;
//        prezime = _prezime;
//        osnovica = _osnovica;
//    }
//
//    virtual void ispis() {
//        cout << ime << ' ' << prezime << " - ";// Ime Prezime - .....
//    }
//    virtual double izracunPlace() = 0;
//};
//class Igrac : public Osoba {
//public:
//    int golovi;
//    int asistencije;
//    //konstruktor za Igrac i1("Luka", "Modric", 300000);
//    Igrac(string _ime, string _prezime, double _osnovica) : Osoba(_ime, _prezime, _osnovica) {}
//    void dodajGolove(int _golovi) {
//        golovi = _golovi;
//    }
//    void dodajAsistencije(int _asistencije) {
//        asistencije = _asistencije;
//    }
//    void ispis() {
//        Osoba::ispis();
//        cout << "golova: " << golovi; cout << ", asistencija: " << asistencije << endl;
//    }
//    double izracunPlace() {
//        int gol, asst;
//        double bonus = 0;
//        gol = golovi / 10;
//        asst = asistencije / 5;
//        for (int i = 0; i < gol; i++) {
//            bonus += osnovica * 0.1;
//        }
//        for (int i = 0; i < asst; i++) {
//            bonus += osnovica * 0.1;
//        }
//        return bonus + osnovica;
//    }
//};
//class Trener : public Osoba {
//public:
//    int w, x, l;//w - win, x - draw, l - lose
//    Trener(string _ime, string _prezime, double _osnovica) : Osoba(_ime, _prezime, _osnovica) {}
//    void dodajPobjede(int _w) { w = _w; }
//    void dodajRemi(int _x) { x = _x; }
//    void dodajIzgubljene(int _l) { l = _l; }
//    void ispis() {
//        Osoba::ispis();
//        cout << "Omjer (W/D/L): " << w << "/" << x << "/" << l << endl;
//    }
//    double izracunPlace() {
//        int W, X, L;
//        double bonus = 0;
//        W = w / 5;
//        X = x / 10;
//        L = l / 8;
//        for (int i = 0; i < W; i++) {
//            bonus += osnovica * 0.1;
//        }
//        for (int i = 0; i < X; i++) {
//            bonus += osnovica * 0.1;
//        }
//        for (int i = 0; i < L; i++) {
//            bonus -= osnovica * 0.1;
//        }
//        return bonus + osnovica;
//    }
//};
//int main() {
//    Igrac i1("Luka", "Modric", 100000);
//    Igrac i2("Kiki", "Ronaldo", 234505);
//    Trener t1("Hose", "Murinjo", 143009);
//    i1.dodajGolove(7);
//    i1.dodajAsistencije(12);
//    i2.dodajGolove(57);
//    i2.dodajAsistencije(32);
//    t1.dodajPobjede(88);
//    t1.dodajRemi(12);
//    t1.dodajIzgubljene(0);
//    i1.ispis();
//    i2.ispis();
//    t1.ispis();
//    cout << endl;
//    cout << i1.izracunPlace() << endl;
//    cout << i2.izracunPlace() << endl;
//    cout << t1.izracunPlace() << endl;
//
//    // demonstracija polimorfizma
//    Osoba* clanKluba[3];
//    clanKluba[0] = &i1;
//    clanKluba[1] = &i2;
//    clanKluba[2] = &t1;
//    for (int i = 0; i < 3; i++) {
//        clanKluba[i]->ispis();
//        cout << clanKluba[i]->izracunPlace() << endl;
//        cout << "----------" << endl;
//    }
//    return 0;
//}

#include <iostream>
#include <string>
using namespace std;
class Osoba {
public:
    string ime;
    string prezime;
    double osnovica;
    Osoba(string i, string p, double o) : ime(i), prezime(p), osnovica(o) {}
    virtual void ispis() = 0;
    virtual double izracunPlace() {
        return osnovica;
    }
};
class Igrac : public Osoba {
public:
    int golovi;
    int asistencije;
    Igrac(string i, string p, double o) : Osoba(i, p, o) {}
    void dodajGolove(int x) {
        golovi = x;
    }
    void dodajAsistencije(int x) {
        asistencije = x;
    }
    void ispis() {
        cout << ime << " " << prezime << " - Golova: " << golovi << ", Asistencija: " << asistencije << endl;
    }
    double izracunPlace() {
        cout << "-----> " << (1 + ((double)(golovi / 10 + asistencije / 5) / 10)) << endl;
        return osnovica * (1 + ((double)(golovi / 10 + asistencije / 5) / 10));
    }
};
class Trener : public Osoba {
public:
    int pobjede;
    int remi;
    int izgubljene;
    Trener(string i, string p, double o) : Osoba(i, p, o) {
        pobjede = 0;
        remi = 0;
        izgubljene = 0;
    }
    void dodajPobjede(int x) {
        pobjede += x;
    }
    void dodajRemi(int x) {
        remi += x;
    }
    void dodajIzgubljene(int x) {
        izgubljene += x;
    }
    void ispis() {
        cout << ime << " " << prezime << " - Omjer (W/D/L): " << pobjede << " / " << remi << " / " << izgubljene << endl;
    }
    double izracunPlace() {
        cout << "-----> " << (1 + ((double)(pobjede / 5 + remi / 10 - izgubljene / 8) / 10)) << endl;
        return osnovica * (1 + ((double)(pobjede / 5 + remi / 10 - izgubljene / 8) / 10));
    }
};
int main() {
    Igrac i("Luka", "Modric", 100000); //Ime, prezime, osnovica place
    i.dodajGolove(7);
    i.dodajAsistencije(12);
    i.ispis(); //Luka Modric - golova: 7, asistencija: 12
    cout << "Placa: " << i.izracunPlace() << endl; //Placa: 120000
    Igrac i2("C", "Ronaldo", 234505);
    i2.dodajGolove(57);
    i2.dodajAsistencije(32);
    i2.ispis(); //C Ronaldo - Golova: 57, Asistencije: 32
    cout << "Placa: " << i2.izracunPlace() << endl; //Placa: 492461
    Trener t1("Hose", "Murinjo", 143009); //Ime, prezime, osnovica place
    t1.dodajPobjede(88); //Dodati broj pobjeda (W)
    t1.dodajRemi(12); //Dodati broj neriješenih utakmica (D)
    t1.dodajIzgubljene(0); //Dodati broj izgubljenih (L)
    t1.ispis(); //Hose Murinjo - Omjer (W/D/L): 88 / 12 / 0
    cout << "Placa: " << t1.izracunPlace() << endl; //Placa: 400425
    t1.dodajPobjede(11);
    t1.dodajIzgubljene(47);
    t1.ispis(); //Hose Murinjo - Omjer (W/D/L): 99 / 12 / 47
    cout << "Placa: " << t1.izracunPlace() << endl; //Placa: 357523
    system("pause");
    return 0;
}