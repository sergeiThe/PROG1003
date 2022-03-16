#pragma once
#include "Iskrem.h"
enum iskremType { SORBE = 1, GRANITE, SLUSH };

class Sorbet :
    public Iskrem
{
private:

	iskremType type;

public:
	Sorbet();
	Sorbet(ifstream& inn);

	virtual void les();
	virtual void skrivTilSkjerm();
	virtual void skrivTilFil();

};

