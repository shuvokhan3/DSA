#include<bits/stdc++.h>
using namespace std;

//Two Pointer
 void moveZeroes(vector<int>& nums) {
     int n = nums.size();
     int index = 0 ;
     for(int i = 0 ; i < n ;i++){
        if(nums[i] != 0){
            nums[index] = nums[i];
            index++;
        }
     }

     for(int i = index ; i < n ;i++){
        nums[i] = 0;
     }
     for(int i = 0 ; i < n ;i++){
        cout<<nums[i]<<" ";
     }
}

int main ()
{
    vector<int>nums = {0,1,0,3,1,5};
    moveZeroes(nums);
    return 0;
}
