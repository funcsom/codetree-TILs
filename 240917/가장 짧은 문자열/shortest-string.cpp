#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str1, str2, str3;
    cin >> str1 >> str2 >> str3;
    int len1, len2, len3;

    len1 = str1.length();
    len2 = str2.length();
    len3 = str3.length();

    if (len1 >= len2 && len1 >= len3) {
        if (len2 >= len3) {
            cout << len1 - len3;
        }
        else {
            cout << len1 - len2;
        }
    }
    else if (len2 >= len1 && len2 >= len3) {
        if (len1 >= len3) {
            cout << len2 - len3;
        }
        else {
            cout << len2 - len1;
        }
    }
    else {
        if (len1 >= len2) {
            cout << len3 - len2;
        }
        else {
            cout << len3 - len1;
        }
    }
    return 0;
}