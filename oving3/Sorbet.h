#pragma once
#include "Iskrem.h"
class Sorbet :
    public Iskrem
{
private:
    enum isTyper { SORBE = 0, GRANITE, SLUSH };


public:
	Sorbet(); // Parameter will be file pointer to read from file

	virtual void les();
	virtual void skrivTilSkjerm();
	virtual void skrivTilFil();

};

