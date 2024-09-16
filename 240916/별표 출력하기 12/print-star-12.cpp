#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << '*' << ' ';
    }
    cout << endl;

    if (n % 2 == 0) {
        for (int i = 0; i < n-1; i++) {
            for (int j = 0; j < n-1; j++) {
                if (j % 2 == 1 && j - i >= 1) {
                    cout << '*' << ' ';
                }
                else {
                    cout << "  ";
                }
            }
            cout << endl;
        }
    }
    else {
        for (int i = 0; i < n-2; i++) {
            for (int j = 0; j < n-1; j++) {
                if (j % 2 == 1 && j - i >= 1) {
                    cout << '*' << ' ';
                }
                else {
                    cout << "  ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}