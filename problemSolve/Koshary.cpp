#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int test;cin>>test;
    while(test--){
        int x , y; cin>>x>>y;

        if(x == 1 && y == 1) cout<<"No"<<endl;

        else if(x % 2 == 0 && y % 2 == 0) cout<<"yes"<<endl;

        else if(x % 2 == 0 && y % 2 != 0)cout<<"yes"<<endl;

        else if(x % 2 != 0 && y % 2 == 0) cout<<"yes"<<endl;

        else if(x % 2 != 0 && y % 2 != 0) cout<<"No"<<endl;
        
    }
    return 0;
}


// 10 , 1