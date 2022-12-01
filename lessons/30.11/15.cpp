#include <iostream>

using namespace std;

int irand(int a, int b) {
    return a + rand() % (b - a + 1);
}

int main()
{
    srand(time(NULL));
    int n = 10; int k; 
    int c = 0; //counter
    int A[n];
    
    cin >> k;
    
    for(int i = 0; i < n; i++){
        A[i] = irand(20, 100);
        cout << A[i] << " ";
    }
    cout << endl;
    
    for (int i = 0; i < n; i++) {
        if (A[i] % 10 == k) {
            c++;
        }
    }
    
    int B[c];
    int new_counter = 0;
    
    for (int i = 0; i < n; i++) {
        if (A[i] % 10 == k) {
            B[new_counter] = A[i];
            new_counter++;
        }
    }
    
    for(int i = 0; i < new_counter; i++){
        cout << B[i] << " ";
    }

    return 0;
}
