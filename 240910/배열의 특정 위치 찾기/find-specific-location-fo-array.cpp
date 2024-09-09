#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10], sum = 0, sums = 0, cnt = 0;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (i % 2 == 1) {
            sum += arr[i];
        }
        if ((i + 1)% 3 == 0) {
            sums += arr[i];
            cnt++;
        }
    }
    cout << fixed;
    cout.precision(1);
    cout << sum << ' ' << (double)sums/cnt;
    return 0;
}