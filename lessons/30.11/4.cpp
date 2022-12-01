#include <iostream>

using namespace std;

int irand(int a, int b) {
    return a + rand() % (b - a + 1);
}

int main()
{
    srand(time(NULL));
    int n = 10; int temp;
    int A[n];
    for(int i = 0; i < n; i++){
        A[i] = irand(5, 10);
        cout << A[i] << " ";
    }
    cout << endl;
    
    for (int i = 0; i < n; i += 2) {
        temp = A[i];
        A[i] = A[i + 1];
        A[i + 1] = temp;
    }
    
    for(int i = 0; i < n; i++){
        cout << A[i] << " ";
    }

    return 0;
}
