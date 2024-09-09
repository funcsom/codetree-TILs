#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int count_arr[7] = {};

    for (int i = 0; i <= 9; i++) {
        cin >> arr[i];
    }

    for (int j = 0; j <= 9; j++) {
        count_arr[arr[j]]++;
    }
    for (int i = 1; i <= 6; i++) {
        cout << i << " - " << count_arr[i] << endl;
    }
    return 0;
}