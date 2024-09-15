#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10], min = 1000, max = 0;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    for (int j = 0; j < 10; j++) {
        if (arr[j] > 500) {
            if (arr[j] < min) {
                min = arr[j];
            }
        }
        else {
            if (arr[j] > max) {
                max = arr[j];
            }
        }
    }
    cout << max << ' ' << min;
    return 0;
}