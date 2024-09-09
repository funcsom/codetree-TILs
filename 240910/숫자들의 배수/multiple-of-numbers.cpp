#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n[100], a, cnt=0;
    cin >> a;

    for (int i = 0; i < 100; i++) {
        n[i] = a * (i + 1);
        cout << n[i] << ' ';
        if (n[i] % 5 == 0) {
            cnt++;
        }
        if (cnt == 2) {
            break;
        }
    }
    return 0;
}