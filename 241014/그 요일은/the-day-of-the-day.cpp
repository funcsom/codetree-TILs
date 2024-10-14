#include <iostream>
#include <string>
using namespace std;

int main() {
    int m1, d1, m2, d2, index, days=0, result;
    string day;
    cin >> m1 >> d1 >> m2 >> d2 >> day;

    string week[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

        for (int i = 0; i < 7; i++) {
            if (day == week[i]) index = i + 1;
        }

    if (m1 == m2) {
        result = (d2 - d1) / 7;
        if ((d2 - d1) % 7 >= index) result++;
        cout << result;
    }
    else {
        int month[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        for (int i = m1 + 1; i < m2; i++) {
            days += month[i];
        }
        days += (month[m1] - d1 + 1);
        days += d2;

        result = days / 7;
        if (days % 7 >= index) result++;
        cout << result;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}