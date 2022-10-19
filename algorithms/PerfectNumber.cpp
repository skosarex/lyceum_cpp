#include <iostream>
using namespace std;

bool isPerfectNumber(int num) {
    int dividersSum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0)
            dividersSum += i;
    }
    return num == dividersSum;
}

int main() {
    int a;
    cin >> a;
    if (isPerfectNumber(a)) {
        cout << a << " is a perfect number";
    } else {
        cout << a << " isn't a perfect number";
    return 0;
}
