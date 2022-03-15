#include "Isbil.h"

Isbil::~Isbil()
{
	isListe.clear();
}

void Isbil::leggTilIsPaaLista(Iskrem* const is)
{
	isListe.push_back(is);
}

void Isbil::skrivStedOgAntallIs()
{
	cout << "Sted: " << sted << endl;
	cout << "Antall is: " << isListe.size() << endl;
}

void Isbil::skrivAlleBilensData()
{
	skrivStedOgAntallIs();

	for (Iskrem* is : isListe)
	{

	}
}

string Isbil::bilensPlassering()
{
	return sted;
}
