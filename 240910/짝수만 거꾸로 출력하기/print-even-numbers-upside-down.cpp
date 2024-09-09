#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, arr[100], where[100], cnt=0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) {

            where[cnt] = arr[i];
            cnt++;
        }
    }
    for (int j = cnt - 1; j >= 0; j--) {
        cout << where[j] << ' ';
    }
    return 0;
}