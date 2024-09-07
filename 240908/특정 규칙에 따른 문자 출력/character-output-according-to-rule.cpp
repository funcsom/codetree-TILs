#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt = 1;
    cin >> n;

    for (int i = 0; i < 2 * n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            cout << ' ' << ' ';
        }
        for (int k = 0; k < cnt; k++) {
            cout << '@' << ' ';
        }
        if (i >= n - 1) cnt--;
        else cnt++;
        cout << endl;
    }
    return 0;
}