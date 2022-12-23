#include <iostream>

using namespace std;

int main() {
    int wordsCount = 0;
    string str;
    getline(cin, str);

    // вспомогательная переменная для цикла
    // true, если предыдущий символ — не пробел
    bool flag = false;

    for (int i = 0; i < str.size(); i++) {
        // если перед текущим пробелом стоит непробельный символ, то wordsCount++
        if (str[i] == ' ') {
            if (flag)
                wordsCount++;
            flag = false;
        } else {
            flag = true;
        }
    }

    // в цикле не проверяется последнее слово, поэтому необходимо еще и это:
    if (str.size() > 0 and str[str.size() - 1] != ' ') wordsCount++;

    cout << wordsCount;
    return 0;
}
