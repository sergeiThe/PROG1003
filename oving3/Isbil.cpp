#include "Isbil.h"

Isbil::Isbil(ifstream& inn) // Size of the list
{
	getline(inn, sted);
	
	// Figure out a way for the ice cream list
}

Isbil::~Isbil()
{
	for (Iskrem* is : isListe)
		delete is;
	
	isListe.clear();
}

void Isbil::leggTilIsPaaLista()
{
	const int option = lesInt("Sorbet - 1, Floteis - 2", 1, 2);

	if (option == 1)
	{
		Iskrem* is = new Sorbet();
		is->les();
		isListe.push_back(is);
		is = nullptr;
	}

	if (option == 2)
	{
		Iskrem* is = new Floteis();
		is->les();
		isListe.push_back(is);
		is = nullptr;
	}

	
}

void Isbil::skrivStedOgAntallIs()
{
	cout << "Sted: " << sted << endl;
	cout << "Antall is: " << isListe.size() << endl;
}

void Isbil::skrivAlleBilensData() // Fix
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
