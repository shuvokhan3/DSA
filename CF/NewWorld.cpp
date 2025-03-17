#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k,p;
    cin>>n>>k>>p;
    if(-n * p <= k && k <= n * p){
        cout<<(abs(k) + p - 1)/ p << '\n';
    }else{
        cout<<"-1"<<endl;
    }
}
int main (){
    int test;
    cin>>test;
    while (test--)
    {
        solve();
    }
    return 0;
}