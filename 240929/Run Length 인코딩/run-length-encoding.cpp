#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    string result;

    cin >> str;

    int cnt = 1;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == str[i+1]) {
            cnt++;
        }
        else {
            result += str[i];
            result += to_string(cnt);
            cnt = 1;
        }
    }

    cout << result.length() << endl << result;
    return 0;
}