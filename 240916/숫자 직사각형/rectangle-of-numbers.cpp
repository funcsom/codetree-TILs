#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m, num=1;
    cin >> n >> m;
    int arr_2d[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << num << ' ';
            num++;
        }
        cout << endl;
    }
    return 0;
}