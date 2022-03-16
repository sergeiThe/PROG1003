/**
*	Programmet skal holde oversikt over isbiler
*	og deres beholdning/sortiment/utvalg av iskrem. 
* 
*	@author		Sergei Johansen
*	@date		14.03.22
*	
*	@file		OVING3.CPP
*/


#include <iostream>
#include "Iskrem.h"
#include "Isbil.h"
#include "main_functions.h"


vector<Isbil*> gIsbiler;

int main()
{
	char kommando;

	do
	{
		skrivMeny();
		kommando = lesChar("Kommando: ");

		switch (kommando)
		{
		case 'A':
			skrivAlleIsBiler();
			break;
		case 'E':
			skrivBilOgEvtLeggInn(false);
			break;
		case 'L':
			skrivBilOgEvtLeggInn(true);
			break;
		case 'Q':
			cout << "Avslutter..." << endl;
		default: 
			cout << "Feil kommando!" << endl;
		}

	} while (kommando != 'Q');

	return 0;
}

