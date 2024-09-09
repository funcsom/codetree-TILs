#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, a[100], cnt=0;
    int h[100];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0) {
            h[cnt] = a[i];
            cnt++;
        }
    }
    for (int j = 0; j < cnt; j++) {
        cout << h[j] << ' ';
    }
    return 0;
}