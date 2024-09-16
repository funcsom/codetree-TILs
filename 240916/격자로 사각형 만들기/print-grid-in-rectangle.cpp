#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, arr[10][10];
    cin >> n;
    for (int i = 0; i < n; i++) {
        arr[i][0] = 1;
        arr[0][i] = 1;
    }

    for (int j = 1; j < n; j++) {
        for (int k = 1; k < n; k++) {
            arr[j][k] = arr[j-1][k] + arr[j][k-1] + arr[j-1][k-1];
        }
    }
    for (int j = 0; j < n; j++) {
        for (int k = 0; k < n; k++) {
            cout << arr[j][k] << ' ';
        }
        cout << endl;
    }
    return 0;
}