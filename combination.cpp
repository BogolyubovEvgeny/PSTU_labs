#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int x, a, b, c, t;
	cout << "Введите трехзначное число\n";
	cin >> x;
	while ((x < 100) && (x > 999))
	{
		cout << "Введеное число не трехзначное\n Повторите ввод\n";
		cin >> x;
	}
	a = x / 100;
	b = x / 10 - a * 10;
	c = x % 10;
	while (a == b)
	{
		cout << "Цифры не должны повторяться\nПовторите ввод\n";
		cin >> x;
		a = x / 100;
		b = x / 10 - a * 10;
		c = x % 10;
	}
	while (b == c)
	{
		cout << "Цифры не должны повторяться\nПовторите ввод\n";
		cin >> x;
		a = x / 100;
		b = x / 10 - a * 10;
		c = x % 10;
	}
	while (a == c)
	{
		cout << "Цифры не должны повторяться\nПовторите ввод\n";
		cin >> x;
		a = x / 100;
		b = x / 10 - a * 10;
		c = x % 10;
	}
	cout << "Все последовательности чисел\n";
	cout << a << b << c <<"\n";
	t = c;
	c = b;
	b = t;
	cout << a << b << c << "\n";
	t = a;
	a = b;
	b = t;
	cout << a << b << c << "\n";
	t = a;
	a = c;
	c = t;
	cout << a << b << c << "\n";
	t = c;
	c = b;
	b = t;
	cout << a << b << c << "\n";
	t = a;
	a = b;
	b = t;
	cout << a << b << c << "\n";
	cout << "Наибольшее из этих чисел\n";
	if ((a > b) && (a > c))
	{
		if (b > c)
		{
			cout << a << b << c;
		}
		else
		{
			cout << a << c << b;
		}
	}
	else
	{
		if ((b > a) && (b > c))
		{
			if (a > c)
			{
				cout<<b<<a<<c;
			}
			else
			{
				cout<<b<<c<<a;
			}
		}
		else
		{
			if (a > b)
			{
				cout << c << a << b;
			}
			else 
			{
				cout << c << b << a;
			}
		}
	}
	return 0;
}