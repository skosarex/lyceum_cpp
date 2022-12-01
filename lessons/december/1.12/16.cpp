/*
    Дан массив целых чисел. Найдите в этом массиве минимальный элемент m и максимальный элемент M.
    Выведите на экран по возрастанию все целые числа из интервала (m; M), которые не входят в заданный массив.
 */

#include <iostream>
#include <cmath>

using namespace std;

int irand(int a, int b) {
    return a + rand() % (b - a + 1);
}

int isIn(int array[], int number) {
    for (int i = 0; i < 10; i++) {
        if (array[i] == number)
            return true;
    }
    return false;
}

int main() {
    srand(time(NULL));
    int n = 10;
    int A[n];

    for (int i = 0; i < n; i++) {
        A[i] = irand(0, 10);
        cout << A[i] << " ";
    }
    cout << endl;

    int min = A[0];
    int max = A[0];

    for (int i = 1; i < n; i++) {
        if (A[i] > max) max = A[i];
        if (A[i] < min) min = A[i];
    }

    for (int i = min + 1; i < max; i++) {
        if (not isIn(A, i)) {
            cout << i << " ";
        }
    }
    return 0;
}
