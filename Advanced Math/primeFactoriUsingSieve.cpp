#include <bits/stdc++.h>
using namespace std;

vector<int> findPrimeFactors(int N)
{
    vector<int> spf(N + 1, 0);
    spf[1] = 1; // Although 1 is not a prime, set for completeness

    for (int i = 2; i <= N; ++i)
    {
        if (spf[i] == 0)
        {
            spf[i] = i;
            for (long long j = (long long)i * i; j <= N; j += i)
            {
                if (spf[j] == 0)
                {
                    spf[j] = i;
                }
            }
        }
    }

    vector<int> factors;
    while (N != 1)
    {
        factors.push_back(spf[N]);
        N /= spf[N];
    }

    return factors;
}
int main()
{

    return 0;
}