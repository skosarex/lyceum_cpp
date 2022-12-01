#include <iostream>

using namespace std;

int F(int n) {
    int sum = 0;
    sum += 1;
    if (n >= 1) {
        sum += 1;
        sum += F(n - 1);
        sum += F(n - 2);
        sum += F(n - 3);
    }
    return sum;
}

int main()
{
    cout << F(22);
    return 0;
}
