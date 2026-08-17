#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    vector<int> arr;

    for(int i = 1 ; i * i <= n; i++){

        if(n % i == 0){
            arr.push_back(i);

            if(i != n / i){
                arr.push_back(n / i);
            }
        }
    }
    sort(arr.begin(), arr.end());
    for(auto x :arr) cout << x << " ";
    return 0;
}