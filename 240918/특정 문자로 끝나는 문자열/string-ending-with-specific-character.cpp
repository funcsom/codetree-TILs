#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str[10];
    char c;
    for (int i = 0; i < 10; i++) {
        cin >> str[i];
    }
    cin >> c;

    for (int i = 0; i < 10; i++) {
        if (str[i][str[i].length() - 1] == c) {
            cout << str[i] << endl;
        }
    }
    return 0;
}