#include<bits/stdc++.h>
using namespace std;
void print_divisors(int n) {
    set<int> val;  
   for(int i = 1; i * i <= n; i++) {  
       if(n % i == 0) {
           val.insert(i);           
           if(i != n / i) {         
               val.insert(n / i);   
           }
       }
   }
   
   // Print elements using an iterator
   for(auto it = val.begin(); it != val.end(); ++it) {
       cout << *it << " ";
   }
   
}

int main (){
    int n;
    cin>>n;
    print_divisors(n);
    return 0;
}