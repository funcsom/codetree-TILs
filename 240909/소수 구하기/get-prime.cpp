#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt = 0;
    cin >> n;

    for (int i = 2; i <= n; i++) {
        int a = 0;
        for (int j = 2; j <= i; j++) {
            if (i % j == 0) {
                a ++;
            }
        }
        if (a == 1) {
            cout << i << ' ';
        }
    }
    
    return 0;
}