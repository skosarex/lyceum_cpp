#include <iostream>

using namespace std;

int F(int n) {
    if (n <= 5)
        return 2 * n;
    if (n % 2 == 0)
        return F(n - 2) + 3 * F(n / 2) + n;
    return F(n - 1) + F(n - 2) + F(n - 3);
}

int main()
{
    cout << F(99) + F(100);
    return 0;
}
