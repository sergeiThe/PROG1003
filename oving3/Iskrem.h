#pragma once
#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Iskrem
{
private:
	string smak;
	int pris;

public:
	Iskrem(); // Parameter will be file pointer to read from file

	virtual void les();
	virtual void skrivTilSkjerm();
	virtual void skrivTilFil();

};

