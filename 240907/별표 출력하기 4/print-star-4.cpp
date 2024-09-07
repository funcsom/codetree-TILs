#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << '*' << ' ';
        }
        cout << endl;
    }
    for (int y = 0; y < n - 1; y++) {
        for (int x = 0; x <= y + 1; x++) {
            cout << '*' << ' ';
        }
        cout << endl;
    }
    return 0;
}