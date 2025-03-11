#include<bits/stdc++.h>
using namespace std;
int main (){
    int test;
    cin>>test;

    while(test--){
        long long int x;
        cin>>x;

        
        int i = 1;
        while (1)
        {

            int val1 = x - i;
            
            int val2 = x ^ val1;

            if(val1 + val2 > x && val1 + x > val2 && val2 + x > val1){
                cout<<val1<<endl;
                break;
            }
            i++;
        }
        
    }
    return 0;
}