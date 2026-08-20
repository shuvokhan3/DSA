#include<bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;
vector<bool>isPrime(N,1);

int sieve(int num){
    isPrime[0] = isPrime[1] = false;
    for(int i = 2; i < num; ++i){
        if(isPrime[i] == true){
            for(int j = 2 * i; j < num ; j += i){
                isPrime[j] = false;
            }
        }
    }

    for(int i = 2; i < num; i++){
        if(isPrime[i] == true){
            cout<< i <<" ";
        }
    }

    return 0;

}

int main(){
    int num;
    cin>>num;
    sieve(num);

    return 0;
}