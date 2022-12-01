#include <iostream>

using namespace std;

int irand(int a, int b) {
    return a + rand() % (b - a + 1);
}

int main() {
    srand(time(NULL));
    int n = 10; int temp;
    int A[n];

    for (int i = 0; i < n; i++) {
        A[i] = irand(-10, 10);
        cout << A[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n / 4; i++) {
        temp = A[n / 2 - 1 - i];
        A[n / 2 - 1 - i] = A[i];
        A[i] = temp;
    }

    for (int i = n / 2; i < n / 2 + n / 4; i++) {
        temp = A[n - 1 - i + n / 2];
        A[n - 1 - i + n / 2] = A[i];
        A[i] = temp;
    }
    
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }

    return 0;
}
