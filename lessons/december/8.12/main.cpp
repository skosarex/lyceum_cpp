#include <iostream>
#include <cmath>

using namespace std;

// ¯\_(ツ)_/¯
int arraySize() {
    return 10;
}

int irand(int a, int b) {
    return a + rand() % (b - a + 1);
}

void printArray(int array[]) {
    for (int i = 0; i < arraySize(); i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int sum(int array[]) {
    int sum = 0;
    for (int i = 0; i < arraySize(); i++) {
        sum += array[i];
    }
    return sum;
}

float average(int array[]) {
    // 2.2
    int size = arraySize();
    return 1.0 * sum(array) / size;
}

bool hasEqualsValuesOnEven(int array[]) {
    // 2.3
    int size = arraySize();
    for (int i = 0; i < size; i += 2) {
        for (int j = 0; j < size; j += 2) {
            if (i == j) continue;
            if (array[i] == array[j]) return true;
        }
    }
    return false;
}

int minEven(int array[]) {
    // 2.4
    int min;
    int size = arraySize();
    for (int i = 0; i < size; i++) {
        if (array[i] % 2 == 0) {
            min = array[i];
            break;
        }
    }

    for (int i = 1; i < size; i++) {
        if (array[i] < min and array[i] % 2 == 0) {
            min = array[i];
        }
    }
    return min;
}

int * reverseBetween(int array[], int K, int M) {
    // не работает!
    int middle = (M + K) / 2;
    int temp;
    for (int i = middle - K; i >= 0; i--) {
        temp = array[middle - i];
        array[middle - i] = array[M - i - 1];
        array[M - i - 1] = temp;
    }
    return array;
}

int *reverseWithoutLast(int array[]) {
    // 2.5
    int size = arraySize();
    int temp;
    for (int i = 0; i < (size - 1) / 2; i++) {
        temp = array[i];
        array[i] = array[size - i - 2];
        array[size - i - 2] = temp;
    }
    return array;
}

int *shiftRight(int array[]) {
    // 2.6
    int size = arraySize();
    int lastElement = array[size - 1];
    for (int i = size - 1; i >= 0; i--) {
        array[i] = array[i - 1];
    }
    array[0] = lastElement;
    return array;
}

int main() {
    srand(time(NULL));
    const int n = arraySize();
    int A[n];

    for (int i = 0; i < n; i++) {
        A[i] = irand(-20, 20);
    }

    // 2.1
    cout << "Array: " << endl;
    printArray(A);
    cout << endl;

    // 2.2
    cout << "Average: " << average(A) << endl;

    // 2.3
    cout << "Есть одинаковые элементы на чётных позициях (bool): " << hasEqualsValuesOnEven(A) << endl;

    // 2.4
    cout << "Min even element: " << minEven(A) << endl;

    // 2.5
    cout << endl << "Reversed: " << endl;
    printArray(reverseWithoutLast(A));

    // 2.6
    cout << endl << "Shift right x2:" << endl;
    printArray(shiftRight(shiftRight(A)));

    // 2.8 - не работает
//    int K = 5;
//    int M = 8;
//    cout << endl << "Reversed between K and M: " << endl;
//    printArray(reverseBetween(A, K, M));

    return 0;
}
