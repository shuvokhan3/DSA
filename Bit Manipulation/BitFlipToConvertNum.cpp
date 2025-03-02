#include<bits/stdc++.h>
using namespace std;
void minBitFlips(int start, int goal) {

    //find XOR
    int val = start ^ goal;
    //get a different value inside this val variable
    //ans is the count of how may 1 bits contains of this value 
    int cnt = 0;
    while(val > 0){
        //count how many 1 is there
        int bit = val % 2;
        if(bit == 1) cnt++;
        val /= 2;
    }
    cout<<cnt<<endl;
        
}
int main  (){
    int n,x;
    cin>>n>>x;
    minBitFlips(n,x);
    return 0;
}