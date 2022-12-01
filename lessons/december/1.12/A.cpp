#include <iostream>

using namespace std;

int irand(int a, int b) {
    return a + rand() % (b - a + 1);
}

int main()
{
    srand(time(NULL));
    int n = 10;
    int c = 0; //counter
    int A[n];

    for(int i = 0; i < n; i++){
        A[i] = irand(-10, 10);
        cout << A[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++) {
        if (A[i] % 2 == 0 and A[i] < 0) {
            c++;
        }
    }

    int B[c];
    int new_counter = 0;

    for (int i = 0; i < n; i++) {
        if (A[i] % 2 == 0 and A[i] < 0) {
            B[new_counter] = A[i];
            new_counter++;
        }
    }

    for(int i = 0; i < new_counter; i++){
        cout << B[i] << " ";
    }

    return 0;
}