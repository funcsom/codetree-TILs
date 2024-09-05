#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt = 3;
    while (cnt >= 1) {
        cin >> n;
        if (n % 2 == 0) {
            cout << n / 2 << endl;
            cnt -= 1;
        }
    }
    return 0;
}