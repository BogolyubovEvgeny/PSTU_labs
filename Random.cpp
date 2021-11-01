#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Russian");
	srand(time(0));
	int x = rand() % 100 + 1;
	int k = 0;
	int s;
	cout << "Загаданное число от 1 до 100 \n На отгадывание дается 7 попыток\n";
	while (k != 7)
	{
		cout << "Введите число\n";
		cin >> s;
		if (x == s)
		{
			cout << "Поздравляем, вы нашли загаданное число!!!\n";
			Sleep(5000);
			system("start random.cpp");
		}
		else
		{
			if (x > s)
			{
				k += 1;
				cout << "Загаданное число больше\n";
			}
			else
			{
				k += 1;
				cout << "Загаданное число меньше\n";
			}
		}
	}
	if (k == 7)
	{
		cout << "Увы, попытки закончились\n" << "Загаданное число = " << x;
		Sleep(5000);
		system("start random.cpp");
	}
	return 0;
}
