#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a_a, b_a;
    char a_s, b_s;
    cin >> a_a >> a_s >> b_a >> b_s;

    if ((a_a >= 19 && a_s == 'M') || (b_a >= 19 && b_s == 'M')) {
        cout << 1;
    }
    else {
        cout << 0;
    }
    return 0;
}