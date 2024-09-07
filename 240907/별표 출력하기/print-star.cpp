#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << '*' << ' ';
        }
        cout << endl;
    }
    for (int k = 0; k < n - 1; k++) {
        for (int l = 0; l < n - 1 - k; l++) {
            cout << '*' << ' ';
        }
        cout << endl;
    }
    return 0;
}