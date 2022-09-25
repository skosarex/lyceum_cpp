/*
    Напишите программу, которая ищет среди целых чисел, принадлежащих числовому 
    отрезку [3532000; 3532160], простые числа. Выведите все найденные простые числа 
    в порядке возрастания, слева от каждого числа выведите его номер по порядку.
*/

#include <iostream>

using namespace std;

int main()
{
    int counter = 1;
    int count, k;
    for (int num = 3532000; num <= 3532160; num++) {
        count = 0;  // dividers count
        k = 2;
        while (k * k <= num) {
            if (num % k == 0) count++;
            k++;
        }
        
        if (count == 0) {
            cout << counter << ". " << num << endl;
            counter++;
        }
    }
    return 0;
}