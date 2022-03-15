#pragma once

void skrivMeny()
{
	cout << "====== Meny ======" << endl;
	cout << "\tA - Vis alle isbiler" << endl;
	cout << "\tE - Vis alle data til en isbil" << endl;
	cout << "\tL - Finn bil og legg inn ny is" << endl;

}

void skrivAlleIsBiler()
{
	if (!gIsbiler.size())
		cout << "\nIngen isbiler funnet!" << endl;

	for (int i = 0; i < gIsbiler.size(); i++)
	{
		gIsbiler.at(i)->skrivAlleBilensData();
	}

}

void skrivBilOgEvtLeggInn(const bool leggInn)
{
	skrivAlleIsBiler();

	// Finn sted
	string sted;
	cout << "\nTast inn sted for aa finne den aktuelle bilen: ";
	getline(cin, sted);

	if (finnIsBil(sted))
	{
		cout << "\nIsbil funnet!" << endl;
		finnIsBil(sted)->skrivAlleBilensData();

		if (leggInn)
			finnIsBil(sted)->leggTilIsPaaLista();
	}
	else
		cout << "Isbil er ikke funnet! Tilbake til meny...";

}

void skrivTilFil()
{



}

void lesFraFil()
{


}

Isbil* finnIsBil(string sted)
{
	for (int i = 0; i < gIsbiler.size(); i++)
	{
		if (gIsbiler.at(i)->bilensPlassering() == sted)
			return gIsbiler.at(i);
		else
			return nullptr;
	}
}