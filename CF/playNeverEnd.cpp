#include<bits/stdc++.h>
using namespace std;
void solve(int n){
    if(n % 3 == 1){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}
int main (){
    int test;
    cin>>test;
    while (test--)
    {
        long long int n;
        cin>>n;
        solve(n);

    }
    return 0;
}