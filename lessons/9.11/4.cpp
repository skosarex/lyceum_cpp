#include <iostream>

using namespace std;

int F(int n) {
    int sum = 0;
    sum += 2 * n;
    if (n > 1) {
        sum += n - 5;
        sum += F(n - 1);
        sum += F(n - 2);
    }
    return sum;
}

int main()
{
    for (int i = 0; i < 100; i++) {
        cout << i << ' ' << F(i) << endl;
    }
    return 0;
}
