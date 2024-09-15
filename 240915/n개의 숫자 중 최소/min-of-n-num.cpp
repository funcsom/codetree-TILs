#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, arr[100], cnt=0, min_val;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (i == 0) {
            min_val = arr[0];
        }
        else {
            if (arr[i] <= min_val) {
                min_val = arr[i];
            }
        }
    }
    
    for (int j = 0; j < n; j++) {
        if (arr[j] == min_val) {
            cnt++;
        }
    }
    cout << min_val << ' ' << cnt;
    

    return 0;
}