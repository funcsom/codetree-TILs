#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for (int i = n; i > 0; i--) { // 2
        for (int j = i; j > 0; j--) {
            for (int k = i; k > 0; k--) {
                cout << '*';
            }
            cout << ' ';
        }
        cout << endl;
    }
    return 0;
}