#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt = 65;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int k = 0; k < i; k++) {
            cout << "  ";
        }
        for (int j = 0; j < n - i; j++) {
            cout << (char)cnt << ' ';
            if (cnt == 90) {
                cnt = 65;
                continue;
            }
            cnt++;
        }
        cout << endl;
    }
    return 0;
}