#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, a, arr[1001] = { 0, }, idx = -1;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a;
        arr[a]++;
    }

    for (int j = n; j >= 1; j--) {
        if (arr[j] == 1) {
            idx = j;
            break;
        }
    }
    cout << idx;
    return 0;
}