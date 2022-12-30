#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Stan
{
public:
	string tip;
	string kategorija;
	string vrstaMaterijala;
	int povrsina;

	Stan(){}
	Stan(string _tip, string _kategorija, string _vrstaMaterijala, int _povrsina) : tip(_tip), kategorija(_kategorija), vrstaMaterijala(_vrstaMaterijala), povrsina(_povrsina) {}
	Stan(string _tip, string _kategorija);
	Stan(string _vrstaMaterijala, int _povrsina);

	void NoviMaterijal(string mat);
	void Display();
};

