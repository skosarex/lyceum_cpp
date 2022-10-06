#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x, fraction_up = 1, fraction_down = 1;
    int n;
    cin >> x;
    
    for (int i = 1; i <= 64; i *= 2) {
        fraction_up *= x - (i - 1);
        fraction_down *= x - i;
    }
    
    cout << fraction_up / fraction_down;
    return 0;
}
