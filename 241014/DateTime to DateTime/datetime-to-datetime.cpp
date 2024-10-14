#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c; // 11, 4, 5
    cin >> a >> b >> c;

    int day=0, hour=0, min=0, result=0;
    min = c - 11;
    if (min < 0) {
        min += 60;
        hour--;
    }
    hour += (b - 11);
    if (hour < 0) {
        hour += 24;
        day--;
    }
    day += (a - 11);
    result = (day * 24 * 60) + (hour * 60) + min;
    if (result < 0) result = -1;
    cout << result;
    return 0;
}