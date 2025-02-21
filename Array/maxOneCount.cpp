#include<bits/stdc++.h>
using namespace std;
int findMaxConsecutiveOnes(vector<int>& nums) {
    int len = nums.size(),maximum = 0,cnt = 0;
    for(int i = 0 ; i < len ;i++){
        if(nums[i] == 1){
            cnt++;
        }else{
            maximum = cnt;
            cnt = 0 ;
        }
    }
    longest = max(maximum,cnt);
    return longest;
}
int main (){
    vector<int>nums = {1,1,1,1,1,1,1,1,1};
    int val = findMaxConsecutiveOnes(nums);
    cout<<val<<endl;
    return 0;
}
