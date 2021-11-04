#include <iostream>
using namespace std;
int main()
{
    const int k = 10;         //константа
    cout << "const=" << k;
    int p = 20;               //присваивание
    cout << "\np=" << p;
    int d = --p;              //операция декремента
    cout << "\nd=" << d;
    return 0;
}
