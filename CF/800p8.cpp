#include <iostream>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        long long n, a, b, c;
        cin >> n >> a >> b >> c;
        
        long long cycle_sum = a + b + c;
        long long full_cycles = n / cycle_sum;
        long long remaining = n % cycle_sum;
        long long total_days = full_cycles * 3;
        
        if (remaining > 0) {
            total_days++;
            remaining -= a;
        }
        if (remaining > 0) {
            total_days++;
            remaining -= b;
        }
        if (remaining > 0) {
            total_days++;
        }
        
        cout << total_days << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
