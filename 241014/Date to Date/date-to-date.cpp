#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int m1, d1, m2, d2, result=0;
    cin >> m1 >> d1 >> m2 >> d2;
    if (m1 == m2) {
        cout << d2 - d1 + 1;
    }

    else {
        int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        for (int i = m1 + 1; i < m2; i++) {
            result += num_of_days[i];
        }
        result += (num_of_days[m1] - d1 + 1);
        result += d2;

        cout << result;
    }
    return 0;
}