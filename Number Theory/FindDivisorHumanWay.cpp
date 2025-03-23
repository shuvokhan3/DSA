#include<bits/stdc++.h>
using namespace std;
int32_t main (){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;cin>>n;
    vector<int>v;
    for(int i = 1 ; i * i <= n ;i++){
        if(n % i == 0){
            v.push_back(i);
            v.push_back(n/i);
        }
        
    }
    sort(v.begin(), v.end());
    for(int i = 0 ; i < v.size() ;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}