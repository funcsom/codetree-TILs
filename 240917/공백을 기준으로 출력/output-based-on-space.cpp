#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str_1, str_2, final;

    getline(cin, str_1);
    getline(cin, str_2);

    for (int i = 0; i < str_1.length(); i++) {
        if (str_1[i] == ' ') {
            continue;
        }
        cout << str_1[i];
    }
    for (int i = 0; i < str_2.length(); i++) {
        if (str_2[i] == ' ') {
            continue;
        }
        cout << str_2[i];
    }
    return 0;
}