#include<bits/stdc++.h>
using namespace std;
void solve() {
    string s;
    cin >> s;
    int n = s.length();

    vector<vector<int>> dp(n+1, vector<int>(2, INT_MAX/2));

    // Base cases
    dp[0][0] = 0;
    dp[0][1] = 0;

    for (int i = 1; i <= n; i++) {
        int curr = s[i-1] - '0';

        for (int last = 0; last < 2; last++) {
            // Don't flip current subsequence
            if (curr == last) {
                dp[i][last] = min(dp[i][last], dp[i-1][last]);
            }

            // Flip a subsequence ending at current index
            dp[i][1-curr] = min(dp[i][1-curr], dp[i-1][last] + 1);
        }
    }

    cout << min(dp[n][0], dp[n][1]) << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
