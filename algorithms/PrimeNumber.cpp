#include <iostream>
using namespace std;

bool isPrimeNumber(int num) {
    int count = 0, k = 2;
    while (k * k <= num && count == 0) {
        if (num % k == 0)
            count++;
        k++;
    }
    return count == 0;
}

int main() {
    int a;
    cin >> a;
    if (isPrimeNumber(a)) {
        cout << a << " is a prime number";
    } else {
        cout << a << " isn't a prime number";
    }
    return 0;
}
