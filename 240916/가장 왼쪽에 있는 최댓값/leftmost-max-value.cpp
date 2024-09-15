#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, arr[1001], max, idx = -1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    idx = n + 1;
    while (idx != 1) {
        max = 1;
        for (int j = 1; j < idx; j++) {
            if (arr[j] > max) {
                max = arr[j];
            }
        }
        for (int j = 1; j < idx; j++) {
            if (arr[j] == max) {
                idx = j;
                cout << idx << ' ';
                break;
            }
        }
    }

    return 0;
}