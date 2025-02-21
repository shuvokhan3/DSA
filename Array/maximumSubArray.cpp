#include<bits/stdc++.h>
using namespace std;
//Brute force
/*void maxSubArray(vector<int>& nums) {
    int len = nums.size();
    int maxSum = 0;

    //Time Complexity is : 0(n^3)
    for(int i = 0 ;i  < len ;i++){
        for(int j = 0 ; j < len ;j++){
            int sum = 0;
            for(int k = i ; k <= j ; k++){
                sum = sum + nums[k];
            }
            maxSum = max(sum,maxSum);
        }
    }
    cout<<maxSum<<endl;
}
*/
/*
//Batter approch
void maxSubArray(vector<int>& nums) {
    int len = nums.size();
    int maxSum = 0;

    //Time Complexity is : 0(n^2)
    for(int i = 0 ;i  < len ;i++){
        int sum = 0;
        for(int j = 0 ; j < len ;j++){
            sum += nums[j];
            maxSum = max(sum,maxSum);
        }
    }
    cout<<maxSum<<endl;
}

*/

//Optimize approch (Kadane's Algoritham)
void maxSubArray(vector<int>& nums) {
    //find the size of this vector
    int n  = nums.size();

    //initial step set max_current = nums[0];
    int max_current = nums[0];
    //initial step set max_global = nums[0];
    int max_global = nums[0];

    //run loop 1 - (n-1) position
    for(int i = 1 ; i < n ;i++){
        //max_current :
        //current i th postion value
        //max_current+ i th postion value
        max_current = max(nums[i] , max_current+nums[i]);
        //max_global > max_current or max_current > max_global
        max_global  = max(max_global, max_current);
    }
    //store maximum subarray value inside the max_global
    cout<<max_global<<endl;
}


int main ()
{
    vector<int>nums = {-2,1,-3,4,-1,2,1,-5,4};
    maxSubArray(nums);
    return 0;
}
