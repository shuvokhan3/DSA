#include<bits/stdc++.h>
using namespace std;

bool is_prime(int n){

    for(int i = 2 ; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }

    return true;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cout<<is_prime(4)<<endl;

    return 0;

}