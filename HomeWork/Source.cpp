#include <iostream>
#include<conio.h>
using namespace std;

//#define PALINDROME
//#define TICKET
#define SHOOTER
//#define TASK_4
void main()
{
	setlocale(LC_ALL, "");
	
#ifdef PALINDROME
	int number; //число вводимое с клавиатуры
	int reverse = 0; //обратная запись введенного числа 
	cout << "Введите число:"; cin >> number;
	int buffer = number;
	while (buffer > 0)
	{
		reverse *= 10; //освобождаем место под младший разряд
		reverse += buffer % 10; // получаем младший разряд числа и 
		buffer /= 10; //убираем сохраненный разряд
	}
	cout << number << endl;
	cout << reverse << endl;
	if (number == reverse)
	{
		cout << "Число палиндром" << endl;
	}
	else
	{
		cout << "Число НЕ палиндром" << endl;
	}

#endif 

#ifdef TICKET
	int i, number;
	int r1 = 0;
	int r2 = 0;
	cout << "Введите номер билета:"; cin >> number;

	for (i = 0; i < 3; i++)
	{
		r1 += number % 10;
		number /= 10;
	}

	for (i = 0; i < 3; i++)
	{
		r2 += number % 10;
		number /= 10;
	}
	if (r1 == r2)
	{
		cout << "Билет счастливый" << endl;
	}
	else
	{
		cout << "Билет несчастливый" << endl;
	}

	
#endif

#ifdef SHOOTER
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		if (key == 'w' || key == 'W') cout << "Вперед" << endl;
		else
			if (key == 's' || key == 'S') cout << "Назад" << endl;
			else
				if (key == 'a' || key == 'A') cout << "Влево" << endl;
				else
					if (key == 'd' || key == 'D') cout << "Вправо" << endl;
					else
						if (key == 32) cout << "Прыжок" << endl;
						else
							if (key == 13) cout << "Огонь" << endl;
							else
								cout << "Error: нет такого действия" << endl;
	} while (key != 27);

#endif 
#ifdef TASK_4
	
#endif // TASK_4


}
