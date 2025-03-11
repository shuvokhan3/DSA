#include <bits/stdc++.h>
using namespace std;
void calculation(vector<int> &point, int n)
{
    if (n == 1)
    {
        cout << point[0] << endl;
    }
    else
    {
        // sort the vector
        sort(point.begin(), point.end());
        int res = ((point[n - 2] + point[n - 1]) - 1);
        n = n - 2;
        for (int i = 0; i < n; i++)
        {
            res = ((res + point[i]) - 1);
        }
        cout << res << endl;
    }
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;

        // input value
        vector<int> point;
        for (int i = 0; i < n; i++)
        {
            int element;
            cin >> element;
            point.push_back(element);
        }

        calculation(point, n);
    }
    return 0;
}