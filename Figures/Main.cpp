#include <iostream>
using namespace std;
//#define SQUARE_1
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
#define TRIANGLE_4
#define ROMB
#define SQUARE_2


void main()
{
#ifdef SQUARE
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
#endif // SQUARE

#ifdef TRIANGLE_1
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
#endif // TRIANGLE_1

#ifdef TRIANGLE_2
	int n = 5;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i > j) continue;
			cout << "*";
		}
		cout << endl;
	}
#endif // TRIANGLE_2

#ifdef TRIANGLE_3
	int n = 5;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i < j) cout << "*";
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
#endif // TRIANGLE_3

#ifdef TRIANGLE_4
	int n = 5;
	{
		for (int i = 5; i>0; i--)
		{
			for (int j = 1; j <= n; j++)
			{
				if (i > j) cout << " ";
				else
				{
					cout << "*";
				}
			}
			cout << endl;
		} 
	}
#endif // TRIANGLE_4

#ifdef ROMB
	/*int n = 10;
	for (int i = 1; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			
	
			}
	}    cout << endl;*/
	
#endif // ROMB
	
	
}