#pragma once
#include "Iskrem.h"
#include "Sorbet.h"
#include "Floteis.h"
#include <list>
using namespace std;

class Isbil
{
private:
	string sted;
	list<Iskrem*> isListe;


public:
	Isbil(ifstream& inn); 
	~Isbil();
	void leggTilIsPaaLista();
	void skrivStedOgAntallIs();
	void skrivAlleBilensData();
	void skrivAlleBilensDataTilFil();
	string bilensPlassering();
};

