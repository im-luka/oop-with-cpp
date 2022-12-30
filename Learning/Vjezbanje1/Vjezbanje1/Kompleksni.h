#pragma once
class Kompleksni
{
public:
	double re, im;

	void Sortiraj();
};

double Modul(Kompleksni x)
{
	if (x.re < 0) {
		x.re = -x.re;
	}
	if (x.im < 0) {
		x.im = -x.im;
	}

	return (x.re * x.re) + (x.im * x.im);
}
