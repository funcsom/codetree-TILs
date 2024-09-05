#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt=0, n;

    cin >> n;

    for (int i = n; i > 0; i--) {
        if (i % 4 == 0) {
            if (i % 100 == 0 && i % 400 != 0) {
                
            }
            else {
                cnt ++;
            }
        }
    }
    cout << cnt;
    return 0;
}