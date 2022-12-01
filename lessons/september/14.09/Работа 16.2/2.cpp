#include <iostream>

using namespace std;

int main()
{
    float x, y;
    cout << "Введи координаты: " << endl;
    cin >> x >> y;

    if (x == 0 && y == 0) {
        cout << "Центр плоскости";
    } else if (x == 0) {
        cout << "Ось абцисс";
    } else if (y == 0) {
        cout << "Ось ординат";
    } else if (x > 0 && y > 0) {
        cout << "Первая четверть";
    } else if (x < 0 && y > 0) {
        cout << "Вторая четверть";
    } else if (x < 0 && y < 0) {
        cout << "Третья четверть";
    } else if (x > 0 && y < 0) {
        cout << "Четвёртая четверть";
    }
    return 0;
}