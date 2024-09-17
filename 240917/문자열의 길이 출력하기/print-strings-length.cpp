#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int sum;
    string str_1, str_2;

    cin >> str_1 >> str_2;
    sum = str_1.length() + str_2.length();
    cout << sum;
    return 0;
}