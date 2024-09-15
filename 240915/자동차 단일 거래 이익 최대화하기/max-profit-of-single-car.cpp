#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, arr[1000], max = 0;
    cin >> n;

    for (int i = n-1; i >= 0; i--) {
        cin >> arr[i];
    }

    for (int j = 0; j < n; j++) {
        for (int k = j; k < n; k++) {
            if (arr[j] - arr[k] > max) {
                max = arr[j] - arr[k];
            }
        }
    }
    cout << max;
    return 0;
}