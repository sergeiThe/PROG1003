#pragma once
#include "Iskrem.h"
class Floteis :
    public Iskrem
{
private:
    bool erVegansk;


public:
	Floteis();
	Floteis(ifstream& inn);

	virtual void les();
	virtual void skrivTilSkjerm();
	virtual void skrivTilFil();
};

