#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a, b, result1, result2;

    result1 = a + b;
    result2 = b + a;

    if (result1 == result2) {
        cout << "true";
    }
    else {
        cout << "false";
    }
    return 0;
}