#pragma once
#include "Iskrem.h"
class Sorbet :
    public Iskrem
{
private:
    enum iskremType { SORBE = 1, GRANITE, SLUSH };

	iskremType type;

public:
	Sorbet(); // Parameter will be file pointer to read from file

	virtual void les();
	virtual void skrivTilSkjerm();
	virtual void skrivTilFil();

};

