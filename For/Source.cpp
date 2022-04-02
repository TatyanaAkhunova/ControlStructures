#include<iostream>
#include <conio.h>
using namespace std;

//#define FOR_SYNTAX
//#define TASK_1
//#define STEPENI
//#define ASCII
//#define FIBONACHI
//#define TASK_5
//#define TABLITSA
#define PIFAGOR

int main()
{
	setlocale(LC_ALL, "");

#ifdef FOR_SYNTAX
	int n; //количество итераций
	cout << "Введите количество операций:"; cin >> n;
	for (
		int i = 0;
		i < n;
		i++)
	{
		cout << i << "\t";
	}
	cout << endl;
#endif // FOR_SYNTAX

#ifdef TASK_1
	int n; //Число для вычисления Факториала
	double f = 1; //Факториал числа
	cout << "Введите число для вычисления Факториала:"; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << endl;
	}
	cout << endl;
#endif 

#ifdef STEPENI
	
	//cout << "Ваш ответ:" << pow(a, n) << endl;

	double a;
	int n;
	cout << "Введите основание степени:"; cin >> a;
	cout << "Введите показатель степени:"; cin >> n;
	double N = 1;
	
	if (n < 0)
	{
		a = 1 / a; //Отправляем основание в знаменатель
		n = -n; //Меняем знак показателя на противоположный
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << "Ваш ответ:"<< N << endl;

#endif // TASK_2

#ifdef ASCII
	for (int i = 0; i < 256; i++)
	{
		if(i % 16 == 0) cout << endl;
		setlocale(LC_ALL, "C"); //Устанавливает кодировку по умолчанию
		cout << (char)i << "  ";
	}
	cout << endl;
	setlocale(LC_ALL, "Russian");
	cout << "Конец" << endl;
#endif 

#ifdef FIBONACHI
	int a = 0, b = 1, c = 1;
	while (b <= 100) 
	{         
		cout << a << "\t";
		c = a + b;
		a = b;
		b = c;
	}
	cout << endl;
	//_getch();
	
#endif // TASK_4

#ifdef TASK_5
	for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0 || i % 7 == 0) 
		{
			continue; 
		}
		cout << i << " ";
	}
	cout << endl;

#endif // TASK_5

#ifdef PIFAGOR
	int i, n;
	for (int i = 1; i <= 10; i++)
	{
		for (int n = 1; n <= 10; n++)
		{
			cout << i * n << "\t";
		}
		cout << endl; 
		cout << endl;
	}
#endif 

#ifdef TABLITSA
	int n = 10;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << i << " * " << j << " = " << i * j << endl;
		}
	}
#endif 
	
		
}