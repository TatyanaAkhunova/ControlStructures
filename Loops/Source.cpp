#include <iostream>
#include <conio.h>
using namespace std;

//#define WHILE
#define DO_WHILE
void main()
{
#if defined WHILE 
	setlocale(LC_ALL, "Russian");
	int n; //Количество итераций
	int i = 0; //Счетчик цикла (считает сколько раз будет выполнен цикл
	cout << "Введите количество итераций:"; cin >> n;
	while (i < n)
	{
		cout << i << "Hello" << endl;
		i++;
	}
#endif

#if defined DO_WHILE 
	char key; //будет хранить код клавиши
	do
	{
		key = _getch(); //ожидает нажатие клавиши, и возвращает ASCII-код нажатой клавиши
		cout << (int)key << "\t" << key << endl;
		//(int)key - явное преобразование char в int
	} while (key != 27);
#endif
}
