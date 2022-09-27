/*
    Дано натуральное число N. Получите новое число M, которое
    образуется из числа N путем замены его последней цифры на
    значение наибольшей цифры в записи числа N.
    Пример: для N = 128452 получаем M = 128458.
*/

#include <iostream>

using namespace std;

int maxDigit(int number) {
    int maxDigit = 0, currentDigit;
    while (number > 0) {
        currentDigit = number % 10;
        if (currentDigit > maxDigit)
            maxDigit = currentDigit;
        number /= 10;
    }
    return maxDigit;
}

int main() {
    int number, result;
    
    cout << "Введи число: ";
    cin >> number;
    
    result = number - number % 10 + maxDigit(number);
    cout << "Результат: " << result;
    
    return 0;
}
