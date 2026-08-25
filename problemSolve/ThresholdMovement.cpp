#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        // Odd n can never have a perfect movement pattern
        if (n % 2 != 0)
        {
            cout << "NO\n";
            continue;
        }

        int minOdd = INT_MAX;
        int maxEven = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            if ((i + 1) % 2 == 1)
            {
                minOdd = min(minOdd, v[i]);
            }
            else
            {
                maxEven = max(maxEven, v[i]);
            }
        }

        // Need an integer k such that:
        // maxEven < k < minOdd
        if (minOdd - maxEven > 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}