#include<iostream>
#include "clasa.h"
#include "mainClasa.h"
using namespace std;

int main2()
{
	char nume[20] ="Kreis";
	int flache = 1209;
	char nume1[20];
	int nr;
	shape S;
	S.SetName(nume[20]);
	S.SetFlache(flache);
	nume1[20] = S.GetName(0);
	nr = S.GetFlache(0);
	cout << nume1[20] << ' ' << nr;
	return 0;
}
