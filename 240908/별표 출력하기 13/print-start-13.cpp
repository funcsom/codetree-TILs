#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for (int i = 0; i < 2 * n; i++) {
        if (i % 2 == 1) {
            for (int j = 0; j < (i + 1) / 2; j++) {
                cout << '*' << ' ';
            }
        }
        else {
            for (int k = 0; k < n - (i / 2); k++) {
                cout << '*' << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}