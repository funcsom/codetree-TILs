#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr_2d_1[3][3], arr_2d_2[3][3];
    for (int j = 0; j < 3; j++) {
        for (int k = 0; k < 3; k++) {
            cin >> arr_2d_1[j][k];
        }
    }
    for (int j = 0; j < 3; j++) {
        for (int k = 0; k < 3; k++) {
            cin >> arr_2d_2[j][k];
        }
    }
    for (int j = 0; j < 3; j++) {
        for (int k = 0; k < 3; k++) {
            arr_2d_1[j][k] += arr_2d_2[j][k];
            cout << arr_2d_2[j][k] << ' ';
        }
        cout << endl;
    }
    return 0;
}