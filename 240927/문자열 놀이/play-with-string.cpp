#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    char temp, o, h;
    int q, k, a, b;
    cin >> s >> q;

    for (int i = 0; i < q; i++) {
        cin >> k;
        if (k == 1) {
            cin >> a >> b;
            temp = s[a-1];
            s[a-1] = s[b-1];
            s[b-1] = temp;
        }
        else if (k == 2) {
            cin >> o >> h;
            for (int j = 0; j < s.length(); j++) {
                if (s[j] == o) s[j] = h;
            }
        }
        cout << s << endl;
    }
    

    return 0;
}