#include<bits/stdc++.h>
using namespace std;

const int N = 1e7+9;
bool f[N];
vector<int>primes;
void sieve(int n){
    for(int i = 2 ;i <= n ;i++){
        if(!f[i]){
            primes.push_back(i);
            for(int j = i+i ; j <= n ;j+=i){
                f[j] = true;
            }
        }
    }

    for(int i = 0 ; i < primes.size() ;i++){
        cout<<primes[i] << " ";
    }
    
}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //give any range n
    int n;cin>>n;
    sieve(n);
    return 0;
}