#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL,"Russian");      //русский язык в консоли
    float i = 7.481;                  //чему равен куб. метр галлона
    int g;                            // количество галлона
    float v;                          // объем
    cout<<"Введите число галлон\n";   
    cin >> g;                         // вводколичества галлона
    v = i * g;                        // формула
    cout << "v=" << v;                //вывод галлона
    return 0;
}
