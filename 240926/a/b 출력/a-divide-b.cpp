#include <iostream>
using namespace std;

int main() {

    int a, b, temp;
    cin >> a >> b;

    // 정수자리수
    if (a < b) {
        cout << 0;
    }
    else {
        while (a >= b) {
            temp = (a % b) * 10 / b;
            cout << temp;
            a = (a % b) * 10 - (b * temp);
        }
    }
    cout << '.';

    // 소수자리수
    for (int i = 0; i < 20; i++) {
        temp = (a % b) * 10 / b;
        cout << temp;
        a = (a % b) * 10 - (b * temp);
        
    }
    return 0;
}