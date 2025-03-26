#include<bits/stdc++.h>
using namespace std;
int GCD(int n, int m){
    if(n == 0) return m;
    if(m == 0) return n;
    if(n < m) swap(n , m);
    return GCD(n % m, m);
}
int32_t main (){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;cin>>n>>m;
    cout<<GCD(n,m)<<endl;
    return 0;
}