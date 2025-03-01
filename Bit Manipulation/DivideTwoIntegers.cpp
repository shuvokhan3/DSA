#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
int divide(int dividend, int divisor) {
    //dividend is equal to divisor
    if(dividend == divisor) return 1;
    //for the negative value if dividend or divisor
    bool sign = true;
    if(dividend >= 0 && divisor < 0) sign = false;
    else if(dividend <= 0 && divisor > 0) sign = false;
    //convert all the value of dividend and divisor is initally is unsigned
    long long n = abs((long long)dividend);
    long long d = abs((long long)divisor);
    divisor = abs(divisor);
    long long ans = 0;
    //mail logic 
    while(n >= d){
        int cnt = 0;
      
        //check the next is valid or not
        while(n >= (d << cnt+1 )){//d<<cnt++ == d * pow(2^cnt++)
            cnt += 1;
        }
        //this time break the value
        ans += (1 << cnt); //same as 2^cnt
        n  -= (d << cnt);
    }

    //to protect the overflow of max range
    if(ans == (1<<31) && sign == true) {
        return INT_MAX;
    }
    //to protect the overflow of min range
    if(ans == (1<<31) && sign == false){
        return INT_MIN;
    }
    return sign ? ans : (-1 * ans);
}
int main (){
    int dividend,divisor;
    cin>>dividend>>divisor;
    divide(dividend,divisor);
    return 0;
}