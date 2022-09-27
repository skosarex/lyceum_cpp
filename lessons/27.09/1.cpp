/*
    Натуральные числа a, b, c называются числами Пифагора,
    если выполняется условие: a^2 + b^2 = c^2. Выведите на экран все
    числа Пифагора, меньшие заданного числа N
*/

#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    for (int a = 1; a < N; a++) {
        for (int b = 1; b < N; b++) {
            for (int c = 1; c < N; c++) {
                if (a * a + b * b == c * c) {
                    cout << a << " " << b << " " << c << endl;
                }
            }
        }
    }
    return 0;
}
