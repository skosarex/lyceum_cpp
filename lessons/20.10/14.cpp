#include <iostream>
using namespace std;

int run(int number) {
    int counter = 0;
    while (number != 0) {
        int number_copy = number;
        int digits_sum = 0;
        while (number_copy != 0) {
            digits_sum += number_copy % 10;
            number_copy /= 10;
        }
        number -= digits_sum;
        counter++;
    }
    return counter;
}

int main() {
    int a;
    cin >> a;
    cout << run(a);
    return 0;
}
