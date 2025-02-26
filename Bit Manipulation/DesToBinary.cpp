#include<bits/stdc++.h>
using namespace std;

string desToBinary(int n){
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
    return res;
}

void BinaryToDes(string bi){
    int len = bi.length();
    int res = 0;
    int p2 = 1;
    for(int i = len - 1 ; i >= 0 ; i--){
        if(bi[i] == '1'){
            res = res + p2;
        }
        p2 = p2 * 2;
    }
    cout<<res<<endl;
}

int main (){
    int n ;
    cin>>n;
    string bi = desToBinary(n);

     
    int len = bi.length();
    

    cout<<bi[len-1]<<endl;


    return 0;
}