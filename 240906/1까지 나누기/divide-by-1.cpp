#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, val;
    cin >> n;
    val = n;

    for (int i = 2; i <= n; i++) {
        val = val / i;
        if (val <= 1) {
            cout << i;
            break;
        }
    }
    return 0;
}