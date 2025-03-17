#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int test;
    cin >> test;
    while (test--)
    {
        double n, k;
        cin >> n >> k;

        // odd add
        if (int(n) % 2 != 0 && int(k) % 2 != 0)
        {
            // conver it to even;(odd - odd = even)
            n = n - k;

            // now n is a even number
            double val = ceil((n / (k - 1))); // k - 1 is a even number
            cout << val + 1 << endl;
        }
        // even odd
        else if (int(n) % 2 == 0 && int(k) % 2 != 0)
        {
            // divide it
            n = n / (k - 1);
            int val2 = ceil(n);
            cout << val2 << endl;
        }

        // even even
        else if (int(n) % 2 == 0 && int(k) % 2 == 0)
        {

            long long int val3 = ceil(n / k);
            cout << val3 << endl;
        }

        // odd even
        else if (int(n) % 2 != 0 && int(k) % 2 == 0)
        {
            n = n - (k - 1);

            long long int val4 = ceil(n / k);
            cout << val4 + 1 << endl;
        }
    }

    return 0;
}