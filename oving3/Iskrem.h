#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <fstream> 
#include "LesData2.h"

using namespace std;

class Iskrem
{
private:
	string smak;
	int pris;

public:
	Iskrem();
	Iskrem(ifstream& inn);

	virtual void les();
	virtual void skrivTilSkjerm();
	virtual void skrivTilFil(ofstream& ut);

};

