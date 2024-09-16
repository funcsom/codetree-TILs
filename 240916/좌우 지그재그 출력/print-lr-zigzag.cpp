#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, num;
    cin >> n;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            num = 1 + n * i;
            for (int j = 0; j < n; j++) {
                cout << num << ' ';
                num++;
            }
        }
        else {
            num = (i + 1) * n;
            for (int j = 0; j < n; j++) {
                cout << num << ' ';
                num--;
            }
        }
        cout << endl;
    }
    return 0;
}