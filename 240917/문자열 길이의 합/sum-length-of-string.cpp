#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt=0, sum=0;
    cin >> n;

    string str[10];
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }
    for (int i = 0; i < n; i++) {
        sum += str[i].length();
        for (int j = 0; j < str[i].length(); j++) {
            if (str[i][j] == 'a') cnt++;
        }
    }

    cout << sum << ' ' << cnt;
    return 0;
}