#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, n;
    cin >> n;

    for (int j = 0; j < n; j++) {
        cin >> a >> b;
        int sum_val = 0;

        for (int i = a; i <= b; i++) {
            if (i % 2 == 0)
                sum_val += i;
        }
        cout << sum_val << endl;
    }
    
    return 0;
}