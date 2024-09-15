#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, q, question, a, b;
    cin >> n >> q;
    int ns[100];

    for (int i = 1; i <= n; i++) {
        cin >> ns[i];
    }

    for (int j = 0; j < q; j++) {
        int idx = 0;
        cin >> question;
        if (question == 1) {
            cin >> a;
            cout << ns[a] << endl;
        }
        else if (question == 2) {
            cin >> a;
            for (int w = 1; w <= n; w++) {
                if (ns[w] == a) {
                    idx = w;
                    break;
                }
            }
            cout << idx << endl;
        }
        else {
            cin >> a >> b;
            for (int k = a; k <= b; k++) {
                cout << ns[k] << ' ';
            }
            cout << endl;
        }
    }
    return 0;
}