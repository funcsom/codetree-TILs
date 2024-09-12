#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100];
    int n, a, cnt=0;

    cin >> n >> a;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == a) {
            cnt++;
        }
    }
    cout << cnt;


    return 0;
}