#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template<class T>
T suma(T v[], int start, int end, T element = 5)
{
	int i = start;
	int S = 0;
	while (i <= end)
	{
		S = S + v[i];
		i++;
	}
	S = S + element;
	return S;
}

template<class T>
T sumalambda(T v[], int start, int end, T element = 5)
{
	vector <T> b;
	int i = start;
	while (i <= end)
	{
		b.push_back(v[i]);
		i++;
	}
	element = 0;
	std::for_each(b.start(), b.end(), [&element](T aux)
	{
		element = element + aux;
	});
	return element;
}
int main1()
{
	int v[100] = { 1,2,3,4,5,6,7,8,9,10 };
	int sum = suma<int>(v, 1, 5);
	cout << sum << endl;
	sum = sumalambda<int>(v, 1, 5);
	cout << sum;
	return 0;
}