#include "Iskrem.h"

void Iskrem::les()
{
	cout << "Smak: " << endl;
	getline(cin, smak);
	pris = lesInt("Pris", 1, 50);
}

Iskrem::Iskrem()
{

}

Iskrem::Iskrem(ifstream& inn)
{
	getline(inn, smak);
	inn >> pris; inn.ignore();
}

void Iskrem::skrivTilSkjerm()
{
	cout << "\tSmak: " << smak << endl;
	cout << "\tPris: " << pris << endl << endl;
}

void Iskrem::skrivTilFil(ofstream& ut)
{
}
