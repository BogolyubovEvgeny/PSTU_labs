#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int q, w, e, a, s, d, z, x, c;
    cout << "Введите 3 числа (часы,минуты,секнды) 1 интервала\n";
    cin >> q >> w >> e;
    cout << "Введите 3 числа (часы,минуты,секнды) 2 интервала\n";
    cin >> a >> s >> d;
    if (d > e)                      //Нахождение секунд в промежутке
    {
        c = d - e;                  // Если секунды 2 интервала больше
    }
    else
    {
        c = (60 + d) - e;           // Если секунды 2 интервала меньше
    }
    if (s > w)                      //Нахождение минут в промежутке
    {
        x = s - w;                  // Если Минуты 2 интервала больше
    }
    else
    {
        x = (60 + s) - w;           // Если минуты 2 интервала меньше
    }
    z = a - q;                      // Нахождение часов в промежутке
    if (e > d)                      //Если секунд 1 было больше, то мы занимали, из-за этого вычитаем из минут
    {
        x -= 1;               
    }
    if (w > s)                      //Если минут 1 было больше, то мы занимали, из-за этого вычитаем из часов
    {
        z -= 1;
    }
    cout << "Часы=" << z << "\nМинуты=" << x << "\nСекунды=" << c;
    return 0;
}