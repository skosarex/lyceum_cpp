#include <iostream>

using namespace std;

int irand(int a, int b) {
    return a + rand() % (b - a + 1);
}

int main()
{
    srand(time(NULL));
    int n = 10;
    int A[n];

    for(int i = 0; i < n; i++){
        A[i] = irand(0, 10);
        cout << A[i] << " ";
    }
    cout << endl;

    int right = A[n - 1];
    for (int i = n - 1; i > 0; i--) {
        A[i] = A[i - 1];
    }
    A[0] = right;


    for(int i = 0; i < n; i++){
        cout << A[i] << " ";
    }

    return 0;
}
