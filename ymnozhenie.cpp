#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int x;                  //число 1
    int y;                  // число 2
    int c;                  // результат умножения
    cout << "Введите 2 числа\n";
    cin >> x >> y;
    c = x * y;              // формула
    cout << c;
    return 0;
}
