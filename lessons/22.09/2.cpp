#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int result = 0;
    int counter = 0;
    while (counter < b) {
        result += a;
        counter++;
    }
    
    cout << result;
    return 0;
}