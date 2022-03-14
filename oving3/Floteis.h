#pragma once
#include "Iskrem.h"
class Floteis :
    public Iskrem
{
private:
    bool erVegansk;


public:
	Floteis(); // Parameter will be file pointer to read from file

	virtual void les();
	virtual void skrivTilSkjerm();
	virtual void skrivTilFil();
};

