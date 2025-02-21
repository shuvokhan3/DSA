#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target){
    vector<int>res;
    int len = nums.size();
    for(int i = 0 ; i < len ; i++){
        int sum = 0;
        for(int j = i; j < len ; j++){
            sum = sum+ nums[j];
            if(sum == target){
                res.push_back(i);
                res.push_back(j);
                return res;
            }
        }
    }
}
int main ()
{
    int target;
    cin>>target;
    vector<int>nums = {3,3};
    res(nums,target);
    return 0 ;
}
