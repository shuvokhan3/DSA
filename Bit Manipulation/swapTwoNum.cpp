#include<bits/stdc++.h>
using namespace std;
pair<int,int> swapTwo(int a , int b){
    a = a ^ b;
    b = a ^ b;// (a^b)^b = (a^b)(b^b) = (a^b) = a
    a = a ^ b;//(a^b)^b  = (a^b)^a = (a^a)(a^b) = (a^b) = b
    
    pair<int,int>val = {a,b};
    return val ;
}
int main (){
    int a ,b;
    cin>>a>>b;
    return 0;
}