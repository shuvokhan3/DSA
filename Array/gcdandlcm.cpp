#include<bits/stdc++.h>
using namespace std;
vector<int> GCDandLCD(int a, int b)
{
    int cpy1 = a;
    int cpy2 = b;
    while(a > 0 && b >0)
    {
        if(a > b) a = a % b;
        else b = b % a;
    }
    if(a == 0)
    {
        int gcd = b;
        int lcd = (cpy1 * cpy2)/gcd;
        return {gcd , lcd};

    }
    else
    {
        int gcd = a;
        int lcd = (cpy1 * cpy2)/gcd;
        return {gcd , lcd};

    }
}

int main()
{
    int a,b;
    cin>>a>>b;

    vector<int>result =  GCDandLCD(a,b);

    cout<<"LCD is :"<<result[0]<<endl;
    cout<<"GCD is :"<<result[1]<<endl;

    return 0;

}
