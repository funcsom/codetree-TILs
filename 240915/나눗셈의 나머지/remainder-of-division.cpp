#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int num[10] = {0,};
    int a, b, temp, sum = 0;
    cin >> a >> b;

    while (a > 1) {
        temp = a % b;
        num[temp]++;
        a = a / b;
    }
    for (int i = 0; i < 10; i++) {
        sum += num[i] * num[i];
    }
    cout << sum;
    return 0;
}