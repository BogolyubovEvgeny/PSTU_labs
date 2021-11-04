#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    float c;                        //Градусы Цельсия
    float f;                        //Градусы по Фарингейту
    cout << "Введите градусы по Фаренгейту\n";
    cin >> f;
    c = 5.0 / 9 * (f - 32);         //формала
    cout << c;
    return 0;
}
