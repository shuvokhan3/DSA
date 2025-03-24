#include<bits/stdc++.h>
using namespace std;

const int N = 1e8+9;
bitset<N>f;

void Bitsetsieve( int n){
    for(int i = 2 ; i <= n ;i++){
        if(!f[i]){
            for(int j = i + i ; j <= n ;j+= i){
                f[j] = true;
            }
        }
    }
    for(int i = 2 ; i < n; i++){
        if(f[i] == false){
            cout<<i<<" ";
        }
    }
}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //give any range n
    int n;cin>>n;
    Bitsetsieve(n);
    return 0;
}