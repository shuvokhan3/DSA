#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    for(int i = 2; i * i <= n ;i++){
        if(n % i == 0) {
            return false;
            break;
        }
    }
    return true;
}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;cin>>n;
    cout<<isPrime(n);
    return 0;
}