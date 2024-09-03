#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int h, w, BMI;

    cin >> h >> w;

    BMI = 10000 * w / (h * h);
    cout << BMI << endl;
    if (BMI >= 25) {
        cout << "Obesity";
    }
    return 0;
}