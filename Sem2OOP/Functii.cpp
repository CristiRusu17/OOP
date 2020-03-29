#include <iostream>
using namespace std;

char* m_strfind(const char* s, const char* f) 
{
	for (int i = 0; i < strlen(f); i++) {
		if (*f == *s) {
			char* f2 = const_cast <char*>(f);
			return f2;
		}
		f++;
	}

	return NULL;
}

int m_strlen(const char* str) 
{
	int ct = 0;

	do {
		ct++;
		str++;
	} while (*str != '\0');

	return ct;
}

void m_strcpy(char* dest, const char* src) 
{
	while (*dest++ = *src++);
}

void m_strcat(char* s, const char* t)
{
	while (*s++);
	s--;
	while (*s++ = *t++);
}

double Aprox_PI(long n) 
{
	double AnzahlTreffer = 0;
	double AnzahlGesamt = 0;

	int i = 1;
	while (i <= n) {
		double randX = ((double)rand() / (RAND_MAX));
		double randY = ((double)rand() / (RAND_MAX));
		double lange = sqrt(randX * randX + randY * randY);
		if (lange < 1)
			AnzahlTreffer++;
		AnzahlGesamt++;
		i++;
	}

	return 4.0 * AnzahlTreffer / AnzahlGesamt;
}

void main1() 
{
	const char  * s1 = "b";
	const char * s2 = "bcuvwiqbvqihnwnjsbcv";

	cout << m_strfind(s1, s2);

	cout << Aprox_PI(1000000) << endl;
}