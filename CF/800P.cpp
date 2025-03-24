#include<bits/stdc++.h>
using namespace std;
int32_t main (){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin>>test;
    while(test--){
        int n;cin>>n;
        cout<<(n / 10) + (n % 10)<<endl;
    }
    return 0;
}   