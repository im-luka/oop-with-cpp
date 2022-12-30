#include <iostream>
using namespace std;
class Kompleksni {
public:
    double re, im;
    Kompleksni() {}
    Kompleksni(double x, double y) {
        re = x;
        im = y;
    }
    // DA SU NAM VARIJABLE re,im PRIVATE !!!
    //friend Kompleksni operator + (Kompleksni Z1, double re);
    //friend Kompleksni operator + (double re, Kompleksni Z1);
    // I. ČLANSKE OPERATORSKE FUNKCIJE
    // KOMPLEKSNI = kompleksni + kompleksni
    Kompleksni operator + (const Kompleksni& Z) {
        return Kompleksni(re + Z.re, im + Z.im);
    }
    //KOMPLEKSNI = double(tip)
    Kompleksni& operator= (double re) {
        this->re = re;
        this->im = 0;//pridruzili smo samo re(realni dio)
        return *this;
    }
    // SUFIKSI PREFIKSI 
    //pref
    Kompleksni& operator++() {
        ++re;
        ++im;
        return *this;
    }
    //suf
    Kompleksni operator++(int) {
        Kompleksni tmp = *this;
        re++;
        im++;
        return tmp;
    }
    //III. OPERATORI INPUT/OUTPUT STREAMA - obavezno friend i definicija vani
    friend istream& operator >> (istream& ulaz, Kompleksni& Z);
    friend ostream& operator << (ostream& izlaz, Kompleksni Z);
    //IV. PREOPTRECENI OPERATOR PRETVORBE
    // za Kompleksni u double pretvorba
    operator double() {
        return re;
    }
    //V. OPERATORSKA FUNKCIJA
    Kompleksni& operator()(double real, double imag) {
        re = real;
        im = imag;
        return *this;
    }
    //VI. OPERATOR INDEKSA

};
// II. NEČLANSKE OPERATORSKE FUNKCIJE
    // Kompleksni = Kompleksni + double
Kompleksni operator + (Kompleksni Z1, double re) {
    return Kompleksni(Z1.re + re, Z1.im);
}
//Kompleksni = double + Kompleksni
Kompleksni operator + (double re, Kompleksni Z1) {
    return Z1 + re;//gore imamo vec definirano!!
}
//III. OPERATORI INPUT/OUTPUT STREAMA
istream& operator >> (istream& ulaz, Kompleksni& Z) {
    ulaz >> Z.re >> Z.im;
    return ulaz;
}
ostream& operator << (ostream& izlaz, Kompleksni Z) {
    izlaz << Z.re << " + " << Z.im << "i";
    return izlaz;
}

int main() {
    Kompleksni A(2, 3);
    Kompleksni B(5, 7);
    Kompleksni C;
    Kompleksni D, E;

    C = A + B;
    A = D = E;
    cout << C.re << " " << C.im << endl;
    //koristenje I-O streama
    Kompleksni F;
    cin >> F;
    cout << F;
    cout << "-----------------------" << endl;
    // PRETVORBA -
    Kompleksni G(3.5, 10);
    double realni_dio = (double)G;
    cout << realni_dio << endl;
    Kompleksni H;
    H = B;
    H(-10, -10);
    cout << H;
}