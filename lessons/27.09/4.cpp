#include <iostream>

using namespace std;


int digitSum(int number) {
    int sum = 0;
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int main() {
    int N;
    cin >> N;
    bool flag;
    int NDigitSum = digitSum(N);
    for (int i = 1; i < N; i++) {
        if (NDigitSum == digitSum(i)) {
            flag = true;
            cout << i << endl;
        }
    }
    if (!flag) {
        cout << "нет";
    }
    return 0;
}


