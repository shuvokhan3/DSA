#include<bits/stdc++.h>
using namespace std;

#define ll long long
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,k; cin>>n>>k;
    vector<ll>v;
    for(ll i = 1 ; i*i <= n ; i++){
        if(n % i == 0){
            v.push_back(i);
            if(i != n/i){
                v.push_back(n/i);
            } 
        }
    }
    sort(v.begin(),v.end());
    --k;
    if(k >= v.size()){
        cout<<-1<<endl;
    }
    else {
        cout<<v[k]<<endl;
    }

    return 0;
}