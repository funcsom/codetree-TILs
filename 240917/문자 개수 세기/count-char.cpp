#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt=0;
    char c;
    string str;

    getline(cin, str);
    cin >> c;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == c) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}