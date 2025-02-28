#include<bits/stdc++.h>
using namespace std;
int setBit(int n) {
    string res = " ";
    while(n > 0){
        if(n % 2 == 1){
            res += '1';
        }else{
            res += '0';
        }
        n = n / 2;
    }
    reverse(res.begin(), res.end());
    int len = res.size();

    int p2 = 1 , p3 = 0;
    for(int i = 0 ; i < len ;i++){
        if(res[i] == '0'){
            res[i] = 1;
        }
        if(res[i] == '1'){
            p3 = p3 + p2;
        }
        p2 = p2 * 2;
    }

    return p2;

    }

int main (){
    int n;
    cin>>n;
    cout<<setBit(n);
    return 0;
}