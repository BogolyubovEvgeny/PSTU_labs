#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");  //русский язык в консоли
    int i = 1;                     //чему равно i изначально
    i = ++i * i++;                //сам пример
    cout << "i=" << i;            // вывод i
    return 0;
}
