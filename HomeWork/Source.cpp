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
	int number; //����� �������� � ����������
	int reverse = 0; //�������� ������ ���������� ����� 
	cout << "������� �����:"; cin >> number;
	int buffer = number;
	while (buffer > 0)
	{
		reverse *= 10; //����������� ����� ��� ������� ������
		reverse += buffer % 10; // �������� ������� ������ ����� � 
		buffer /= 10; //������� ����������� ������
	}
	cout << number << endl;
	cout << reverse << endl;
	if (number == reverse)
	{
		cout << "����� ���������" << endl;
	}
	else
	{
		cout << "����� �� ���������" << endl;
	}

#endif 

#ifdef TICKET
	int i, number;
	int r1 = 0;
	int r2 = 0;
	cout << "������� ����� ������:"; cin >> number;

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
		cout << "����� ����������" << endl;
	}
	else
	{
		cout << "����� ������������" << endl;
	}

	
#endif

#ifdef SHOOTER
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		if (key == 'w' || key == 'W') cout << "������" << endl;
		else
			if (key == 's' || key == 'S') cout << "�����" << endl;
			else
				if (key == 'a' || key == 'A') cout << "�����" << endl;
				else
					if (key == 'd' || key == 'D') cout << "������" << endl;
					else
						if (key == 32) cout << "������" << endl;
						else
							if (key == 13) cout << "�����" << endl;
							else
								cout << "Error: ��� ������ ��������" << endl;
	} while (key != 27);

#endif 
#ifdef TASK_4
	
#endif // TASK_4


}
