#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }
        int min_a = *min_element(a.begin(), a.end());
        int min_b = *min_element(b.begin(), b.end());
        long long total = 0;
        for (int i = 0; i < n; ++i) {
            int da = a[i] - min_a;
            int db = b[i] - min_b;
            total += max(da, db);
        }
        cout << total << '\n';
    }
    return 0;
}