#include<bits/stdc++.h>
using namespace std;
//call by value
void memoryAddressOfVariable2(int num){
   int *ptr = &num;
   cout<<ptr<<endl;//0x61ff0
   cout<<*ptr<<endl;//99
}
//call by refrence
void memoryAddressOfVariable(int &num){
    int *ptr =&num;//take a pointer varibale to store the memory address of num;
    cout<<*ptr<<endl;//99
    cout<<ptr<<endl;//0x61ff1c
}
int main ()
{
   int num = 99;
   memoryAddressOfVariable2(num);
   return 0;
}
