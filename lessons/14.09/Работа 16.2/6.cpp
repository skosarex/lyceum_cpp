#include <iostream>

using namespace std;

int main() {
    float a, b, c, d;
    cout << "Введи четыре числа: " << endl;
    cin >> a >> b >> c >> d;

    cout << max(min(a, b), min(c, d));
    return 0;
}