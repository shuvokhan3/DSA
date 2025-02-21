#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int maxVal = 0;
        for(int i = 0 ; i < n ;i++){
            for(int j = i+1 ; j < n; j++){
                if(nums[i] < nums[j]){
                    maxVal = max(maxVal,nums[j]);
                }else{
                    maxVal = max(maxVal,nums[i]);
                }
            }
        }
        return maxVal;
}
int main ()
{
    vector<int>nums = {3,2,3};
    cout<<majorityElement(nums)<<endl;
}
