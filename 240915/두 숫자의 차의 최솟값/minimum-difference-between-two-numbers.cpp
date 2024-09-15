#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, arr[10], min;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int j = 0; j < n-1; j++) {
        arr[j] = arr[j+1] - arr[j];
    }
    min = arr[0];
    for (int k = 0; k < n-1; k++) {
        if (arr[k] < min) {
            min = arr[k];
        }
    }
    cout << min;
    return 0;
}