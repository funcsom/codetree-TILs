#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "* ";
    }
    cout << endl;

    if (n % 2 == 0) n -= 1;
    else n-=2;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j % 2 == 0 && j - i >= 1) cout << "* ";
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}