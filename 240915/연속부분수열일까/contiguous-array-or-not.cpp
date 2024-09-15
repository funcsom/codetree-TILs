#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n1, n2, idx = -1;
    int n1s[100], n2s[100];
    bool h = 1;
    cin >> n1 >> n2;

    for (int i = 0; i < n1; i++) {
        cin >> n1s[i];
    }
    for (int i = 0; i < n2; i++) {
        cin >> n2s[i];
    }
    
    for (int j = 0; j < n1; j++) {
        if (n2s[0] == n1s[j]) {
            idx = j;
            break;
        }
    }
    for (int k = 0; k < n2; k++) {
        if (n2s[k] != n1s[idx + k]) {
            h = 0;
        }
    }
    if (h == 0) {
        cout << "No";
    }
    else {
        cout << "Yes";
    }
    return 0;
}