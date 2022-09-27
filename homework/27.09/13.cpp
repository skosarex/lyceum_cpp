/*
    Дано натуральное число N. Получите новое число M, которое
    образуется из числа N путем замены его последней цифры на
    значение наименьшей цифры в записи числа N. 
    Пример: для N = 128452 получаем M = 128451.
*/

#include <iostream>

using namespace std;

int minDigit(int number) {
    if (number == 0) return 0;
    int minDigit = 9, currentDigit;
    while (number > 0) {
        currentDigit = number % 10;
        if (currentDigit < minDigit)
            minDigit = currentDigit;
        number /= 10;
    }
    return minDigit;
}

int main() {
    int number, result;
    
    cout << "Введи число: ";
    cin >> number;
    
    result = number - number % 10 + minDigit(number);
    cout << "Результат: " << result;
    
    return 0;
}
