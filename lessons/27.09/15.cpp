/*
    Палиндром — это сочетание символов, которое читается одинаково 
    слева направо и справа налево. Например, числа 4884 и 121 
    являются палиндромами. Составьте программу, определяющую, 
    является ли заданное натуральное число палиндромом.
*/

#include <iostream>

using namespace std;

int reverseNumber(int number) {
    int result = 0;
    while (number != 0) {
        result = 10 * result + number % 10;
        number /= 10;
    }
    return result;
} 


int main() {
    int number;
    cin >> number;
    
    if (number == reverseNumber(number)) {
        cout << "Ура, палиндром!";
    } else {
        cout << "Не палиндром, как же жаль!";
    }
    return 0;
}
