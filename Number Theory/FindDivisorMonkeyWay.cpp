#include<bits/stdc++.h>
using namespace std;
int32_t main (){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;cin>>n;
    for(int i = 1 ;i <= n ;i++){
        if(n % i == 0){
            cout<<i<<" ";
        }
    }
    return 0;
}