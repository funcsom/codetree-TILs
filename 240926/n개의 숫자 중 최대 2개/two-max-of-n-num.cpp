#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int array[100];
    int n, max_1, max_2, num;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    max_1 = array[0];
    for (int i = 0; i < n; i++) {
        if (array[i] >= max_1) {
            max_1 = array[i];
            num = i + 1;
        }
    }
    max_2 = array[num+1];
    for (int i = 0; i < n; i++) {
        if (i == num - 1) {
            continue;
        }
        if (array[i] >= max_2) {
            max_2 = array[i];
        }
    }
    cout << max_1 << ' ' << max_2;
    return 0;
}