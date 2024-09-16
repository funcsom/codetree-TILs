#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    int arr_2d_1[10][10], arr_2d_2[10][10];
    for (int j = 0; j < n; j++) {
        for (int k = 0; k < m; k++) {
            cin >> arr_2d_1[j][k];
        }
    }
    for (int j = 0; j < n; j++) {
        for (int k = 0; k < m; k++) {
            cin >> arr_2d_2[j][k];
        }
    }
    for (int j = 0; j < n; j++) {
        for (int k = 0; k < m; k++) {
            if (arr_2d_1[j][k] == arr_2d_2[j][k]) {
                arr_2d_1[j][k] = 0;
            }
            else {
                arr_2d_1[j][k] = 1;
            }
            cout << arr_2d_1[j][k] << ' ';
        }
        cout << endl;
    }
    return 0;
}