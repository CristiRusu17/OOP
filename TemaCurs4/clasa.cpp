#include <iostream>
#include "clasa.h"

shape::shape(int nrNa,int nrFl)
{
	nrn = 0;
	nrf = 0;
	nrN = nrNa;
	nrF = nrFl;
	Name = new NElem[nrN];
	Flache = new TElem[nrF];
}

bool shape::SetName(char nume)
{
	if (nrn == 0)
	{
		Name[0] = nume;
		nrn++;
	}
	else
	{
		Name[nrn] = nume;
		nrn++;
	}
	return true;
}

bool shape::SetFlache(int flache)
{
	if (nrf == 0)
	{
		Flache[0] = flache;
		nrf++;
	}
	else
	{
		Flache[nrf] = flache;
		nrf++;
	}
	return true;
}

int shape::GetName(int nr)
{
	return Name[nr];
}

int shape::GetFlache(int nr)
{
	return Flache[nr];
}