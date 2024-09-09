#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n[11];
    cin >> n[0] >> n[1];
    for (int i = 2; i < 10; i++) {
        n[i] = n[i-1] + 2 * n[i-2];
    }
    for (int j = 0; j < 10; j++) {
        cout << n[j] << ' ';
    }
    return 0;
}