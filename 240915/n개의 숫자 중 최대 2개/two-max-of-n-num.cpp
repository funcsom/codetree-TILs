#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int first, second, n, a;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (i == 0) {
            first = a;
        }
        if (a > first) {
            second = first;
            first = a;
        }
        else if (a > second) {
            second = a;
        }
    }
    cout << first << ' ' << second;
    return 0;
}