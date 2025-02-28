#include<bits/stdc++.h>
using namespace std;
int main (){
    long long int test;
    cin>>test;
    while (test--)
    {
        double n,cnt = 0;
        cin>>n;
        for(long long int i = 0 ; i <= n ;i++){
            if(i % 3 == i % 5){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}