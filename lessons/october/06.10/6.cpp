#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N;
    float fraction_up = 0, fraction_down = 0, result = 1;
    cin >> N;
    
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            fraction_up += cos(j);
            fraction_down += sin(j);
        }
        result *= (fraction_up / fraction_down);
    }
    
    
    cout << result;
    return 0;
}
