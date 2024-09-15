#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int hospital[4] = { 0, 0, 0, 0 };
    int fever;
    char cold;

    for (int i = 0; i < 3; i++) {
        cin >> cold >> fever;
        if (cold == 'Y' && fever >= 37) {
            hospital[0]++;
        }
        else if (cold == 'N' && fever >= 37) {
            hospital[1]++;
        }
        else if (cold == 'Y' && fever < 37) {
            hospital[2]++;
        }
        else {
            hospital[3]++;
        }
    }
    for (int j = 0; j < 4; j++) {
        cout << hospital[j] << ' ';
    }
    if (hospital[0] >= 2) {
        cout << 'E';
    }
    return 0;
}
// hospital[3]으로 선언해서 메모리가 안먹었음