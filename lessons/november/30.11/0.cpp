#include <iostream>

using namespace std;

int irand(int a, int b) {
    return a + rand() % (b - a + 1);
}

int main()
{
    srand(time(NULL));
    int n = 10; int minIndex = 0; int maxIndex = 0; int temp = 0;
    int A[n];
    for(int i = 0; i < n; i++){
        A[i] = irand(5, 10);
        cout << A[i] << " ";
    }
    cout << endl;
    
    minIndex = 0; maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (A[i] <= A[minIndex]) minIndex = i;
    }
    for (int i = n; i >= 0; i--) {
        if (A[i] > A[maxIndex]) maxIndex = i;
    }
    
    temp = A[minIndex];
    A[minIndex] = A[maxIndex];
    A[maxIndex] = temp;
    
    for(int i = 0; i < n; i++){
        cout << A[i] << " ";
    }

    return 0;
}
