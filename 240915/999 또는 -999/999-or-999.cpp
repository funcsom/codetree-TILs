#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100];
    int a, min_val, max_val;

    cin >> a;
    min_val = a;
    max_val = a;

    while (1) {
        cin >> a;
        if (a == 999 || a == -999) {
            break;
        }
        if (a > max_val) {
            max_val = a;
        }
        if (a < min_val) {
            min_val = a;
        }
    }
    cout << max_val << ' ' << min_val;
    return 0;
}