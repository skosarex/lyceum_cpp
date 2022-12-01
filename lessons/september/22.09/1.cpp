#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    while (a < 1 || b < 0) {
        cin >> a >> b;
    }
    while (a <= b) {
        cout << a << "*" << a << "=" << a * a << endl;
        a++;
    }

    return 0;
}
