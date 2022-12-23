#include <iostream>

using namespace std;

int main() {
    string str;
    getline(cin, str);

    // в цикле проходим по каждому символу, меняем 'а' на 'б' и наоборот
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'А') str[i] = 'Б';
        if (str[i] == 'Б') str[i] = 'А';
        if (str[i] == 'а') str[i] = 'б';
        if (str[i] == 'б') str[i] = 'а';
    }

    cout << str;
    return 0;
}
