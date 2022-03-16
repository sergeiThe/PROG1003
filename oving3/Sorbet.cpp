#include "Sorbet.h"

Sorbet::Sorbet()
{
}

Sorbet::Sorbet(ifstream& inn)
	: Iskrem(inn)
{
	string tempType;
	getline(inn, tempType);
	
	if (tempType == "Sorbe" || tempType == "sorbe")
		type = SORBE;
	if (tempType == "Granite" || tempType == "granite")
		type = GRANITE;
	if (tempType == "Slush" || tempType == "slush")
		type = SLUSH;
}

void Sorbet::les()
{
	Iskrem::les();
	cout << "Sorbe - 1" << endl
		<< "Granite - 2" << endl
		<< "Slush - 3" << endl;
	const int tempType = lesInt("Velg type", 1, 3);

	switch (tempType)
	{
	case 1:
		type = SORBE;
		break;
	case 2:
		type = GRANITE;
		break;
	case 3:
		type = SLUSH;
		break;
	}
}

void Sorbet::skrivTilSkjerm()
{
	switch (type)
	{
		case SORBE:
			cout << "\tSorbet type: sorbe" << endl;
			break;
		case GRANITE:
			cout << "\tSorbet type: granite" << endl;
			break;
		case SLUSH:
			cout << "\tSorbet type: slush" << endl;
			break;
	}

	Iskrem::skrivTilSkjerm();
}

void Sorbet::skrivTilFil()
{
}
