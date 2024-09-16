#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m, arr[100][100], real[100][100], num=0;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                arr[i][j] = num;
                num++;
            }
        }
        else {
            for (int j = n-1; j >= 0; j--) {
                arr[i][j] = num;
                num++;
            }
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            real[j][i] = arr[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << real[i][j] << ' ';
        }
        cout << endl;
    }
    
    return 0;
}