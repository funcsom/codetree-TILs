#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt=0, sum=0;
    char c;
    string str[20];

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }

    cin >> c;

    for (int i = 0; i < n; i++) {
        if (str[i][0] == c) {
            cnt++;
            sum += str[i].length();
        }
    }
    cout << fixed;
    cout.precision(2);

    cout << cnt << ' ' << (double)sum/cnt;
    return 0;
}