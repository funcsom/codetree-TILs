#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    if (n <= 2 || n >= 12) {
        cout << "Winter";
    }
    else if (n <= 5) {
        cout << "Spring";
    }
    else if (n <= 8) {
        cout << "Summer";
    }
    else {
        cout << "Fall";
    }
    return 0;
}