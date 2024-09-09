#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int arr[100];
    int count_arr[10] = {};

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int j = 0; j < n; j++) {
        count_arr[arr[j]]++;
    }
    for (int i = 1; i <= 9; i++) {
        cout << count_arr[i] << endl;
    }
    return 0;
}