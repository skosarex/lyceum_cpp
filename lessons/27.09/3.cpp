/*
    Найдите наибольшую и наименьшую цифры в записи заданного натурального числа.
*/

#include <iostream>

using namespace std;

int main()
{
    int N, minDigit = 9, maxDigit = 0, currentDigit;
    cin >> N;
    while (N > 0) {
        currentDigit = N % 10;
        if (currentDigit > maxDigit) {
            maxDigit = currentDigit;
        }
        if (currentDigit < minDigit) {
            minDigit = currentDigit;
        }
        N /= 10;
    }
    cout << "min: " << minDigit << ", max: " << maxDigit;
    return 0;
}
