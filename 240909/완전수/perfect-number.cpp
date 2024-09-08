#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int start, end, cnt = 0;
    cin >> start >> end;

    for (int i = start; i <= end; i++) {
        int sum_val = 0;
        for (int j = 1; j < i; j++) {
            if (i % j == 0) {
                sum_val += j;
            }
        }
        if (sum_val == i) {
            cnt++;
        }
    }
    
    cout << cnt;
    return 0;
}