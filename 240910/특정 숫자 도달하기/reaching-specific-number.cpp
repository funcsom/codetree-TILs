#include <iostream>
using namespace std;

int main() {

	int arr[10], sum_val = 0, a = 0;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (arr[i] >= 250) {
            break;
        }
        a++;
        sum_val += arr[i];
    }
    cout << fixed;
    cout.precision(1);

    cout << sum_val << ' ' << (double)sum_val / a;

	return 0;

}