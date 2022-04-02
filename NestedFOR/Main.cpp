#include <iostream>
using namespace std;
#define MULTIPLICACION_TABLE 
//#define SIMPLE

void main()
{
	setlocale (LC_ALL, "");
#ifdef MULTIPLICACION_TABLE
	int n = 10;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << i << " * " << j << " = " << i * j << endl;
		}
	}
#endif // !MULTIPLICACION_TABLE

#ifdef SIMPLE
	int n;
	//bool simple = true;
	cout << "Введите число: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		bool simple = true;
		simple = true; //Предполагаем что число простое, но это нужно проверить
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0) simple = false;
		}
		if(simple) cout << i << "\t";
	}
#endif // DEBUG


}