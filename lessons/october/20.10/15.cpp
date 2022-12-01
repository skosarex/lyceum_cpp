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
    int n;
    while (true) {
        cout << "Введите число, большее 2: ";
        cin >> n;
        if (n > 2)
            break;
    }

    for (int i = n; i + 2 < 2 * n; i++) {
        if (isPrimeNumber(i) && isPrimeNumber(i + 2))
            cout << i << " & " << i + 2 << endl;
    }

    return 0;
}
