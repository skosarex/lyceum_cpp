#include <iostream>
#include <tgmath.h>

using namespace std;

int main() {
    float x, y;
    cout << "Введи координаты точки: ";
    cin >> x >> y;
    if (x >= 0 && pow(x, 2) + pow(y, 2) <= pow(5, 2) && pow(x, 2) + pow(y, 2) >= pow(3, 2)) {
        cout << "Точка принадлежит области";
    } else {
        cout << "Точка не принадлежит области";
    }
    return 0;
}