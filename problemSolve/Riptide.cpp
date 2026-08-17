#include <bits/stdc++.h>
using namespace std;

int32_t main()
{

    // test case
    int t;
    cin >> t;
    while (t--)
    {

        // take input
        vector<int> v;
        for (int i = 0; i < 3; i++)
        {
            int val;
            cin >> val;
            v.push_back(val);
        }

        sort(v.begin(), v.end());
        int cnt = 0;
        while (1)
        {
            if (v[0] == v[1] || v[1] == v[2] || v[2] == v[1] || v[0] == v[2])
            {
                cout << cnt << endl;
                break;
            }
            v[0] = v[0] + 1;
            v[2] = v[2] - 1;
            cnt++;
        }
    }
    return 0;
}