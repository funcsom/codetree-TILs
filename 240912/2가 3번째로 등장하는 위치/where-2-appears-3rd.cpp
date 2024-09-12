#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100];
    int n, cnt=0, idx=-1;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == 2) {
            cnt++;
            idx = i + 1;
        }
        if (cnt == 3) {
            cout << idx;
            break;
        }
    }
    return 0;
}