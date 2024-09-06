#include <iostream>

using namespace std;

int main() {
    // 변수 선언 및 입력
    int n;
    cin >> n;
    int cnt = 0;
    
    // n이 1000 미만일 때까지 반복
    while (n < 1000) {
        if (n % 2 == 1)
            n = 2 * n + 2;
        else
            n = 3 * n + 1;
        
        cnt++;
    }
    
    cout << cnt;
    
    return 0;
}