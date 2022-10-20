#include <iostream>
using namespace std;

void run(int n) {
    bool flag = true;
    for (int i = 1; i < n; i++) {
        int i_copy = i;
        while (i_copy != 0) {
            int digit = i_copy % 10;
            if (digit != 0 and i % digit != 0) {
                flag = false;
                break;
            }
            i_copy /= 10;
        }
        if (flag)
            cout << i << endl;
        flag = true;
    }
}

int main() {
    int n;
    cin >> n;
    run(n);
    return 0;
}
