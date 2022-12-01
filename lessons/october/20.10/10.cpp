#include <iostream>
using namespace std;

int reverseNumber(int&number) {
    int result = 0;
    while (number != 0) {
        result = result * 10 + number % 10;
        number /= 10;
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    cout << reverseNumber(n);
    return 0;
}
#include <iostream>
using namespace std;

int reverseNumber(int&number) {
    int result = 0;
    while (number != 0) {
        result = result * 10 + number % 10;
        number /= 10;
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    cout << reverseNumber(n);
    return 0;
}
