#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        for (char &c : s) {
            if (c == 'p') {
                c = 'q';
            } else if (c == 'q') {
                c = 'p';
            }
        }
        cout << s << endl;
    }
    return 0;
}
