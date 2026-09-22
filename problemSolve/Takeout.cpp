#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n, cnt = 0 , one = 0 , two = 0 ;
        cin>>n;

        int arr[n];
        for(int i = 0 ; i < n; i++){
            cin>>arr[i];
        }

        for(int i = 0 ; i < n ; i++){
            if(arr[i] == 0){
                cnt++;
            }
            else if(arr[i] == 1){
                one++;
            }
            else if(arr[i] == 2){
                two++;
            }
        }

        int pairs = min(one, two);

        int remaining = max(one, two) - pairs;

        int res = cnt + pairs + remaining / 3;

        cout << res << '\n';
    }

    return 0;
}