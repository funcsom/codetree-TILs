#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    cin >> a;

    for (int i = 1; i <= a; i++) {
        if (i % 2 == 0 || i % 5 == 0 || (i % 3 == 0 && i % 9 != 0)) {
            continue;
        }
        cout << i << ' ';
    }
    return 0;
}