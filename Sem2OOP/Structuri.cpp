#include <iostream>

using namespace std;

struct klein 
{
	long double var_longdouble;
	double var_double;
	long var_long;
	int var_int;
	char var_char;
	bool var_bool;
};

struct groﬂ 
{
	bool var_bool;
	long double var_longdouble;
	long var_long;
	double var_double;
	char var_char;
	int var_int;
};

template <typename T>
void print_marime(T S) 
{

	cout << "Size of Struct: " << sizeof(S) << '\n';
	cout << "Size of Bool: " << sizeof(S.var_bool) << '\n';
	cout << "Size of Char: " << sizeof(S.var_char) << '\n';
	cout << "Size of Int: " << sizeof(S.var_int) << '\n';
	cout << "Size of Long: " << sizeof(S.var_long) << '\n';
	cout << "Size of Double: " << sizeof(S.var_double) << '\n';
	cout << "Size of Long Double: " << sizeof(S.var_longdouble) << '\n';
	cout << '\n';
}

void main2() 
{

	klein k = {};
	print_marime(k);

	groﬂ g = {};
	print_marime(g);
}