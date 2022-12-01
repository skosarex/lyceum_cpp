#include <iostream>
using namespace std;

int irand(int a, int b) {
    return a + rand() % (b - a + 1);
}

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
    srand(time(NULL));
    int n = 30;
    int counter = 0;
    int A[n], B[n];

    for (int i = 0; i < n; i++) {
        A[i] = irand(0, 100);
        cout << A[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++) {
        if (isPrimeNumber(A[i])) {
            B[counter] = A[i];
            counter++;
        }
    }

    for (int i = 0; i < counter; i++) {
        cout << B[i] << " ";
    }

    return 0;
}