#include <iostream>

using namespace std;

int main()
{
    int n = -1;
    while (n < 0)
        cin >> n;
    int a = 1, b = 1, fibonacci = 1;
    while (b < n) {
        b = a + b;
        a = b - a;
        fibonacci += a;
    }
    cout << fibonacci;
    return 0;
}