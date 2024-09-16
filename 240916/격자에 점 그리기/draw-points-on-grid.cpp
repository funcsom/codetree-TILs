#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m, arr[10][10] = {};
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int r, c;
        cin >> r >> c;
        arr[r-1][c-1] = i + 1;
    }

    for (int j = 0; j < n; j++) {
        for (int k = 0; k < n; k++) {
            cout << arr[j][k] << ' ';
        }
        cout << endl;
    }
    return 0;
}