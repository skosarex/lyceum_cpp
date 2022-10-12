#include <iostream>

using namespace std;

int main()
{
    int age;
    cin >> age;
    int lastDigit = 0;
    if (age < 10) {
        lastDigit = age;
    } else {
        lastDigit = age % 10;
    }
    if (age == 1 or age == 21 or age == 31 or age == 31 or age == 41 or age == 51 or age == 61 or age == 71 or age == 81 or age == 91) {
        cout << "Мне " << age << " год.";
    } else if ((age < 10 or age > 20) and (lastDigit == 2 or lastDigit == 3 or lastDigit == 4)) {
        cout << "Мне " << age << " года.";
    } else {
        cout << "Мне " << age << " лет.";
    }
    return 0;
}
