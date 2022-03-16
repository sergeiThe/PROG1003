#include "Floteis.h"

Floteis::Floteis(ifstream& inn)
	: Iskrem(inn)
{
	string veganskOrd;
	getline(inn, veganskOrd);
	if (veganskOrd == "vegan")
		erVegansk = true;
	else
		erVegansk = false;
}

void Floteis::les()
{
	Iskrem::les();

	char svar = lesChar("Vegansk? (j/n)");
	

	while (svar != 'J' && svar != 'N')
	{
		svar = lesChar("Prov igjen. Vegansk? (j/n)");
	}
}

void Floteis::skrivTilSkjerm()
{
	if (erVegansk)
		cout << "\tVegansk?: Ja" << endl;
	else
		cout << "\tVegansk?: Nei" << endl;

	Iskrem::skrivTilSkjerm();
}
