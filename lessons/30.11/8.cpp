#include <iostream>

using namespace std;

int irand(int a, int b) {
    return a + rand() % (b - a + 1);
}

int main()
{
    srand(time(NULL));
    int n = 10; int temp;
    int X[n];
    for(int i = 0; i < n; i++){
        X[i] = irand(0, 10);
        cout << X[i] << " ";
    }
    cout << endl;
    
    for (int i = 0; i < n / 2; i++) {
        temp = X[n - i - 1];
        X[n - i - 1] = X[i];
        X[i] = temp;
    }
    
    for(int i = 0; i < n; i++){
        cout << X[i] << " ";
    }

    return 0;
}
