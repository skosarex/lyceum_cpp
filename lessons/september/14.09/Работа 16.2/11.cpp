#include <iostream>

using namespace std;

int main()
{
    float a, b, c;
    cout << "Введи три числа: " << endl;
    cin >> a >> b >> c;

    if (a + b > 0 || a + c > 0 || b + c > 0) {
        cout << "Есть положительная сумма";
    } else {
        cout << "Нет положительной суммы";
    }
}