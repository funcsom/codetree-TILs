#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    
    while (a <= b) {
        cout << a << ' ';

        if (a % 2 == 0) {
            a += 3;
            // cout << a << ' ';
        }
        else {
            a *= 2;
            // cout << a << ' ';
        }
    }
    return 0;
}