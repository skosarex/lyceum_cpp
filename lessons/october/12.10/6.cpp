#include <iostream>
#include <cmath>

using namespace std;

int fact(int n) {
    double result = 1.0;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

double an(int n) {
    bool minus = false;
    double result = -1;
    for (int i = 1; i <= n; i++) {
        if (minus) {
            result += -1.0 * pow(2, i) / fact(i);
            minus = false;
        } else {
            result += 1.0 * pow(2, i) / fact(i);
            minus = true;
        }
    }
    return result;
}

int main()
{
    double eps; int n = 1; bool minus = false;
    cin >> eps;
    while (true) {
        //cout << an(n) << " " << an(n - 1) << endl;
        if (abs(an(n) - an(n - 1)) < eps) {
            cout << n;
            return 0;
        }
        n++;
    }
    return 0;
}