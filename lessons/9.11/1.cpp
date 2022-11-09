#include <iostream>

using namespace std;

int F(int n) {
    if (n < 2)
        return 1;
    return 2 * F(n - 1) + F(n - 2);
}

int main()
{
    cout << F(6);
    return 0;
}
