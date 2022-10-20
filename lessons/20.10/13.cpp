#include <iostream>
using namespace std;

int run(int N, int M) {
    int counter = 0;
    for (int i = N; i <= M; i++) {
        int right_sum = i % 10 + i / 10 % 10 + i / 100 % 10;
        int left_sum = i / 100000 + i / 10000 % 10 + i / 1000 % 10;
        if (right_sum == left_sum) {
            counter++;
        }
    }
    return counter;
}

int main() {
    int N, M;
    cin >> N >> M;
    cout << run(N, M);
    return 0;
}
