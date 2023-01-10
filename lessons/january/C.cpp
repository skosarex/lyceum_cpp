#include <iostream>

using namespace std;

int irand(int a, int b) {
    return a + rand() % (b - a + 1);
}

int main() {
    srand(time(NULL));
    int N = 3;
    int M = 3;

    int A[N][M];

    cout << "Matrix:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0 ; j < M; j++) {
            A[i][j] = irand(0, 100);
            cout.width(3);
            cout << A[i][j];
        }
        cout << endl;
    }

    cout << endl << "New matrix:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = M - 1; j >= 0; j--) {
            cout.width(3);
            cout << A[j][i];
        }
        cout << endl;
    }
}
