#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    int n;
    cin >> str >> n;

    if (str.length() >= n) {
        for (int i = str.length() - 1; i > str.length() - n - 1; i--) cout << str[i];
    }
    else {
        for (int i = str.length() - 1; i >= 0; i--) cout << str[i];
    }
    return 0;
}