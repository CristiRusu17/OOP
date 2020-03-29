#include <iostream>
#include "Functii.h"
#include "Structuri.h"
using namespace std;

int main()
{
	int opt = 0;
	cout << "1-Rulare meniu functii" << endl << "2-Rulare meniu structuri"<<endl<<"0-EXIT"<<endl;
	cout << "OPTIUNE:" << ' ';
	cin >> opt;
	while (opt != 0)
	{
		if (opt == 1)
			main1();
		if (opt == 2)
			main2();

		cout << "1-Rulare meniu functii" << endl << "2-Rulare meniu structuri" << endl << "0-EXIT" << endl;
		cout << "OPTIUNE:" << ' ';
		cin >> opt;
	}
	return 0;
}