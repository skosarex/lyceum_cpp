#include <iostream>

using namespace std;

int main() {
    int N, Ncopy, maxDigit = 0, currentDigit;
    cin >> N;
    Ncopy = N;
    while (Ncopy > 0) {
        currentDigit = Ncopy % 10;
        if (currentDigit > maxDigit)
            maxDigit = currentDigit;
        Ncopy /= 10;
    }
    
    int counter = 0;
    while (N > 0) {
        currentDigit = N % 10;
        if (currentDigit == maxDigit)
            counter++;
        N /= 10;
    }
    
    cout << counter;
    return 0;
}

