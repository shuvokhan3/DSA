#include<bits/stdc++.h>
using namespace std;

int countSetBits(int n)
{
    if (n == 0)
        return 0;

    // Find the largest power of 2 less than or equal to n
    int x = 0;
    while ((1 << x) <= n)
    {
        x++;
    }
    x--;

    // Formula to count set bits
    int bitsUpTo2x = x * (1 << (x - 1));
    int msbFrom2xToN = n - (1 << x) + 1;
    int remainingBits = countSetBits(n - (1 << x));

    return bitsUpTo2x + msbFrom2xToN + remainingBits;
}
int main (){
    int n;
    cin>>n;
    cout<<countSetBits(n);
}