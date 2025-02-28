#include<bits/stdc++.h>
using namespace std;
int main (){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        char arr[n];
        for(int i = 0 ;i < n ;i++){
            cin>>arr[i];
        }
        for(int i = 0 ; i < n ;i++){

            if(arr[i] != arr[i+1]){

                char val = arr[i];

                while(i < n){
                    i++;
                    if(arr[i] == val){
                        cout<<val<<endl;
                        break;
                    }
                }

            }
            else if(arr[i] == arr[i+1]){
                cout<<arr[i];
                i = i+2;
            }

        }
    }
    return 0;
}