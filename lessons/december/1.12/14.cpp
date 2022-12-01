/*
    Даны координаты n точек на плоскости: (X1, Y1), ..., (Xn, Yn). (n <= 30).
    Найдите номера двух точек, расстояние между которыми максимально (такая пара точек — единственная).
 */

#include <iostream>
#include <cmath>

using namespace std;

int irand(int a, int b) {
    return a + rand() % (b - a + 1);
}

float lengthBetweenPoints(int x1, int y1, int x2, int y2) {
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

int main() {
    srand(time(NULL));
    int n = 5;
    int X[n];
    int Y[n];
    float length[n * (n - 1) / 2];
    string description[n * (n - 1) / 2];
    int counter = 0;

    // generate array and print
    for (int i = 0; i < n; i++) {
        X[i] = irand(-10, 10);
        Y[i] = irand(-10, 10);
        cout << "(" << X[i] << ";" << Y[i] << ") ";
    }
    cout << endl;


//    find lengths between point
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (i == j) continue;
            int x1 = X[i]; int x2 = X[j];
            int y1 = Y[i]; int y2 = Y[j];

            float len = lengthBetweenPoints(x1, y1, x2, y2);
            string str ="(" + to_string(x1) + ":" + to_string(y1) + ") - (" + to_string(x2) + ":" + to_string(y2) + ")";

            length[counter] = len;
            description[counter] = str;
            counter++;
        }
    }

//    find max length
    int maxIndex = 0;
    for (int i = 1; i < counter; i++) {
        if (length[i] > length[maxIndex])
            maxIndex = i;
    }

    cout << endl;
    cout << "Max length: " << length[maxIndex] << endl;
    cout << "Points: " << description[maxIndex];

    return 0;
}
