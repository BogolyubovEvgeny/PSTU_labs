#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int q, w, e, r, t;
    cout << "Введите 5 чисел\n";
    cin >> q >> w >> e >> r >> t;
    cout<<"Обратная последовательность\n" << t << "\n" << r << "\n" << e << "\n" << w << "\n" << q;   //вывод в обратной последовательностьи от ввода
    return 0;
}
