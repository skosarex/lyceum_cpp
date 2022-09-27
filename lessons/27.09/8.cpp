#include <iostream>

using namespace std;


int dividersSum(int number) {
    int sum = 1;
    int k = 2;
    while (k < number) {
        if (number % k == 0)
            sum += k;
        k++;
    }
    return sum;
}

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        if (dividersSum(i) == i)
            cout << i << endl;
    }
    return 0;
}

