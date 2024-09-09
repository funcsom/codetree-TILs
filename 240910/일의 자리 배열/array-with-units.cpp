#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[11];

    for (int i = 0; i < 10; i++) {
        if (i < 2) {
            cin >> arr[i];
        }
        else {
            arr[i] = arr[i-1] + arr[i-2];
        }
        cout << arr[i] % 10 << ' ';
    }
    return 0;
}