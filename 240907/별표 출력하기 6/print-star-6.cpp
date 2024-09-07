#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for (int i = n; i > 0; i--) {
        for (int k = 0; k < n - i; k++) {
            cout << ' ' << ' ';
        }
        for (int j = 0; j < 2 * i - 1; j++) {
            cout << '*' << ' ';
        }
        cout << endl;
    }
    for (int l = 1; l <= n - 1; l++) {
        for (int k = 0; k < n - l - 1; k++) {
            cout << ' ' << ' ';
        }
        for (int m = 0; m < 2 * l + 1; m++) {
            cout << '*' << ' ';
        }
        cout << endl;
    }
    return 0;
}