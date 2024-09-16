#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr_2d[2][4];
    cout << fixed;
    cout.precision(1);

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr_2d[i][j];
        }
    }
    for (int i = 0; i < 2; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            sum += arr_2d[i][j];
        }
        cout << (double)sum / 4 << ' ';
    }
    cout << endl;
    for (int i = 0; i < 4; i++) {
        int sum = 0;
        for (int j = 0; j < 2; j++) {
            sum += arr_2d[j][i];
        }
        cout << (double)sum / 2 << ' ';
    }
    cout << endl;
    int sum_total = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            sum_total += arr_2d[j][i];
        } 
    }
    cout << (double)sum_total / 8 << ' ';
    return 0;
}