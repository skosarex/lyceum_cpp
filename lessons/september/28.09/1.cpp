#include <iostream>

using namespace std;

double F(int i) {
    if (i == 0)
        return 1.;
    return 1. * F(i - 1) / i;
}

int main()
{
    int N; double sum = 0;
    cout << "N: ";
    cin >> N;
    
    for (int i = 0; i <= N; i++) {
        sum += F(i);
    }
    
    cout << "Result: " << sum;
    return 0;
}
