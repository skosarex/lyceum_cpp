#include <iostream>

using namespace std;

int irand(int a, int b) {
    return a + rand() % (b - a + 1);
}

int main() {
    srand(time(NULL));
    int N = 7;
    int M = 7;

    int A[N][M];

    for (int i = 0; i < N; i++) {
        for (int j = 0 ; j < M; j++) {
            A[i][j] = irand(0, 100);
            cout.width(3);
            cout << A[i][j];
        }
        cout << endl;
    }


    int maxX = 0;
    int maxY = 0;
    int minX = 0;
    int minY = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0 ; j < M; j++) {
            if (A[i][j] > A[maxX][maxY]) {
                maxX = i;
                maxY = j;
            }
            if (A[i][j] < A[minX][minY]) {
                minX = i;
                minY = j;
            }
        }
    }

    cout << endl;
    cout << "max: " << A[maxX][maxY] << endl;
    cout << "min: " << A[minX][minY] << endl;

    cout << "max index: " << maxX << " " << maxY << endl;
    cout << "min index: " << minX << " " << minY << endl;

}
