#include<bits/stdc++.h>
using namespace std;
int main (){
    int test;
    cin>>test;
    while(test--){
        int l,r,d,u,f = 0;
        cin>>l>>r>>d>>u;
    
        vector<int>shape;

        shape.push_back(l);
        shape.push_back(r);
        shape.push_back(d);
        shape.push_back(u);

        for(int i = 0 ; i < 4 ;i++){
            if(shape[0] == shape[i]){
                continue;
            }else{
                f = 1;
                break;
            }
        }
        if(f == 0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}