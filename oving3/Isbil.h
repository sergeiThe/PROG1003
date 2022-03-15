#pragma once
#include "Iskrem.h"
#include <list>
using namespace std;

class Isbil
{
private:
	string sted;
	list<Iskrem*> isListe;


public:
	Isbil(); // File parameter that reads from file
	~Isbil(); // Delete list with pointers
	void leggTilIsPaaLista(Iskrem* const is);
	void skrivStedOgAntallIs();
	void skrivAlleBilensData();
	void skrivAlleBilensDataTilFil();
	string bilensPlassering();
};

