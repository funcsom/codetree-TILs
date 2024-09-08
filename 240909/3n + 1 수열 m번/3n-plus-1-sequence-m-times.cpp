#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int m, n;
    cin >> m;

    for (int j = 0; j < m; j++) {
        cin >> n;
        int cnt = 0;

        while (n != 1) {
            if (n % 2 == 0) {
                n /= 2;
            }
            else {
                n = n * 3 + 1;
            }
            cnt++;
        }
        cout << cnt;
        cout << endl;
    }
    
    return 0;
}