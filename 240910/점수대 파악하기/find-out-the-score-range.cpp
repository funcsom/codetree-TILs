#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100], cnt=0;
    int count_arr[11] = {};

    for (int i = 0; i < 100; i++) {
        cin >> arr[i];
        if (arr[i] == 0) {
            break;
        }
        cnt++;
    }

    for (int j = 0; j < cnt; j++) {
        count_arr[arr[j]/10]++;
    }
    for (int i = 10; i >= 1; i--) {
        cout << i << "0 - " << count_arr[i] << endl;
    }
    return 0;
}