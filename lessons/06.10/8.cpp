#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    float x, result;
    cin >> n >> x;
    float subresult = sin(x);
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            subresult = sin(subresult);
        }
        result += subresult;
        subresult = sin(x);
    }
    
    cout << result;
    return 0;
}
