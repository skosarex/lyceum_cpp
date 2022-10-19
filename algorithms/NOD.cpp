#include <iostream>
using namespace std;

int NOD(int a, int b) {
    while (a != b)
        if (a > b) a -= b;
        else b -= a;
    return a;
}

int main() {
    int m, n;
    cin >> m >> n;
    cout << NOD(m, n);
    return 0;
}
