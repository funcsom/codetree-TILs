#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << '(' << i << ", " << j << ')' << ' ';
            if ((i == 1 && j == 3) || (i == 2 && j == 2) || (i == 3 && j == 1)) {
                cout << endl;
            }
        }
    }
    return 0;
}